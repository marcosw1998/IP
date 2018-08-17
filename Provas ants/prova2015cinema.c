#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int posX, posY, tipo;
}posicao;

int main()
{
	FILE *arquivo;
	posicao *lugar;
	char **matriz;
	int i, j, k,aux,cont=0, maiorX, maiorY,maior, teste;
	int contm=0,conti=0,saldo=0;

	lugar = (posicao*) malloc(1*sizeof(posicao));

	arquivo = fopen("posicoes.bin","rb");
	if(arquivo==NULL) exit(1);

	while ((fread(lugar,sizeof(posicao),1,arquivo))) // conta quantos tem dessa estrutura dentro do arquivo
    {
		cont++;
	}

	free(lugar);
	rewind(arquivo);

    lugar = (posicao*) malloc(cont * sizeof(posicao));
	if (lugar == NULL) exit(1);

    printf("cont = %d\n", cont);

	fread(lugar,sizeof(posicao),cont,arquivo);

    //printf("lugar[0].posX = %d\n",lugar[0].posX);

	maiorX = lugar[0].posX;

	for(i=0;i<cont;i++){ // para saber qual a maior posX
		if(lugar[i].posX > maiorX){
			maiorX = lugar[i].posX;
		}
	}
	//printf("maiorX = %d\n", maiorX);

	maiorY = lugar[0].posY;

	for(i=0;i<cont;i++)
    { // para saber qual a maior posY
		if(lugar[i].posY > maiorY)
        maiorY = lugar[i].posY;
	}

	printf("Mx=%d My=%d\n",maiorX,maiorY);

	if (maiorX>= maiorY)
    {
        maiorX++;
        matriz = (char**) malloc(maiorX * sizeof(char*));
        if(matriz == NULL) exit(1);

        for(i=0;i<maiorX;i++)
        {
            matriz[i]= (char*) malloc (maiorX * sizeof(char));
            if(matriz[i] == NULL) exit(1);
        }
            maior= maiorX;
    }
    else
    {
        maiorY++;
        matriz = (char**) malloc(maiorY * sizeof(char*));
        if(matriz == NULL) exit(1);

        for(i=0;i<maiorY;i++)
        {
            matriz[i]= (char*) malloc (maiorY * sizeof(char));
            if(matriz[i] == NULL) exit(1);
        }
            maior= maiorY;
    }

        for(i=0;i<cont;i++)
        {
            printf("%d %d %d\n",lugar[i].posX,lugar[i].posY,lugar[i].tipo);
        }
        printf("\n");

	for(i=0;i<maior;i++)
    {
        for(j=0;j<maior;j++)
        {
            teste=1;
            for(k=0;k<cont;k++)
            {
                if (lugar[k].posX == i)
                {
                  if (lugar[k].posY == j)
                  {
                        if(lugar[k].tipo == 1)
                        {
                            printf("M, Entrei em %d %d\n",i,j);
                            matriz[i][j] = 'M';
                            contm++;
                            teste=0;
                        }
                            if(lugar[k].tipo == 2)
                            {
                                printf("I, Entrei em %d %d\n",i,j);
                                matriz[i][j] = 'I';
                                teste=0;
                                conti++;
                            }

                  }
                }
                   if(teste==1)
                    {
                        matriz[i][j] = 'L';
                    }
            }
        }
	}

	for(i=0;i<maior;i++)
    {
        for(j=0;j<maior;j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
	}

	saldo= ((conti *30) + (contm*15));

	printf("Saldo do dia = %d",saldo);

	fclose(arquivo);
	return 0;
}
