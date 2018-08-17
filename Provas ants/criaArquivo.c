#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int cod; //cod do produto
    char np[41]; //nome do produto
    float p; //preço
    int qpe; // qtd de produto em estoque
}cent; // estrutura central

int main(){
    cent *x;
	int qntprod,i;
	FILE *arq;

	printf("Digite a quantidade de produtos que deseja cadastrar: ");
	scanf("%d", &qntprod);

	x = (cent*) malloc(qntprod * sizeof(cent));
	if (x == NULL)
    {
        printf("Alocação errada");
        exit(1);
    }

	arq = fopen("central.bin","wb");
	if(arq==NULL)
    {
        printf("Arquivo invalido");
        exit(1);
    }

	for(i=0;i<qntprod;i++)
	{
        printf("Digite o codigo do produto:\n");
        scanf("%d", &x[i].cod);
        printf("Digite o nome do produto:\n");
		scanf(" %s",x[i].np);
		printf("Digite o preço do produto:\n");
		scanf("%f", &x[i].p);
        printf("Quantos produtos temos em estoque?\n");
        scanf("%d", &x[i].cod);
	}
	fwrite(x,sizeof(cent),qntprod,arq);
	free(x);
	fclose(arq);
    return 0;
}



