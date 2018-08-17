#include <stdio.h>
#include <stdlib.h
#include <string.h>
// Funções que podem ajudar
/*
Funções que podem ser úteis

//Para ordenar uma estutura
typedef struct
{
    float preco;
    char prod[26];
}compras;

void ordena(int n, compras *x)
{
    int m,i,j,k;
    compras aux;

    for(i=0;i<n;i++)
    {
        for(j=0; j<n; j++)
        {
            m = strcmp(x[i].prod,x[j].prod);
            if(m < 0)
            {
              aux = x[i];
              x[i] = x[j];
              x[j] = aux;
            }
        }
    }
}
// ordenar em matriz de char
void sort(char **linha, char **linhatroca)
{
  char *swap;
    swap = *linha;
    *linha = *linhatroca;
    *linhatroca = swap;
}
// aloca matriz
void aloca(int **matriz, int l, int c)
{
    int i;
    printf("Alocando a matriz");

    matriz= (int**) malloc( l * sizeof(int*));

    for(i=0; i<l; i++)
    {
       matriz[i] =(int*) malloc(c * sizeof(int));
        if (matriz[i] == NULL)
        {
            printf("Erro alocando");
            exit(1);
        }
    }
}

*/

typedef struct x
{
    int posx,posy,tipo;
}x;

int main()
{
    FILE *arq;
    x *cine;
    arq = fopen("binario.bin",r+b);
    if (arq == NULL)
    {
        printf("Eroou");
        exit(1);
    }

    cine = (x*) calloc(6,sizeof(x));
    if (cine == NULL)
    {
        printf("Eroou");
        exit(1);
    }
    for(i=0;i<6;i++)
    {
        printf("Digite a posx [%d]\n",i);
        scanf("%d",cine[i].posx);
        fwrite()

        printf("Digite a posy [%d]\n",i);
        scanf("%d",cine[i].posx);
        printf("Digite o tipo Int= 2 M=1 [%d]\n",i);
        scanf("%d",cine[i].tipo);

    }

    return 0;
}
