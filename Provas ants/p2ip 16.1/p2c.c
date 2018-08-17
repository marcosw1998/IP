#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const caixa=1;

typedef struct
{
    int cod; //cod do produto
    char np[41]; //nome do produto
    float p; //preço
    int qpe; // qtd de produto em estoque
}cent; // estrutura central

typedef struct
{
    int qpv;
    int cod;
    int caixa; // apenas para facilitar, tendo em vista que o caixa é cosntante
} temp;

typedef struct
{
    int qpv;
    int cod;
    int caixa;
} historico;

void atualizaestoque( temp *t,int contcent, int cont_t,cent * central)
{
    int i,j;
        for(i=0;i<contcent;i++)
        {
            for(j=0;j<cont_t;j++)
            {
                if (t[j].cod == central[i].cod)
                    central[i].qpe - t[j].qpv;
                    if(central[i].qpe < 0)
                    {
                        printf("Operacao invalida, nao temos o produto em estoque\n");
                    }
            }
        }
}

void printconfere(int contcent, cent *central, historico *hist, int contlog)
{
    int i;

    for(i=0;i<contcent;i++)
    {
        printf("Nome do produto %s\n",central[i].np);
        printf("Codigo %d\n",central[i].cod);
        printf("Preco %f\n",central[i].p);
        printf("Qtd em estoque %d\n",central[i].qpe);
    }

    printf("Caixa %d\n",caixa);
    for(i=0;i<contlog;i++)
    {
        printf("Codigo do produto %d\n",hist[i].cod);
        printf("Qtd prod vendidos %d\n",hist[i].qpv);
    }

}


int main()
{
    cent *central;
    central = (cent*) calloc(1,sizeof(cent));
    temp *t;
    historico *hist;
    FILE *arqc;
    FILE *arqt;
    FILE *arqh;
    char c;
    int cont,i,j,condparada=0,contlog=0;

    arqc = fopen("central.bin","r+b");

    while ((fread(central,sizeof(cent),1,arqc))) // conta quantos tem dessa estrutura dentro do arquivo
    {
		cont++;
	}
    free(central);
    central = (cent*) calloc(cont,sizeof(cent));
    rewind(arqc);

	t=  (temp*) calloc (1,sizeof(temp));
    i=0,j=1;
    arqh = fopen("log.bin","a+b"); // Salvo no histórico
    do
    {
        printf("Digite o codigo do produto\n");
        scanf("%d",&t[i].cod);
        printf("Digite quantos quer\n");
        scanf("%d",&t[i].qpv);
        printf("Deseja continuar a compra?\nPara continuar digite C\nPara efetuar o pagamento digite P\nPara fechar o caixa digite F\n");
        scanf(" %c",&c);
        if (c!='P' && c!='F')
        {
            i++;
            j++;
            realloc(t,j*sizeof(temp));
            condparada = 0;
        }
        else if(c=='P')
        {
            arqt = fopen("tmp.bin","wb");
            fwrite(t,sizeof(temp),j,arqt);
            fwrite(t,sizeof(temp),j,arqh);
            atualizaestoque(t,cont,j,central);
            fwrite(central,sizeof(cent),cont,arqc);   // Aqui atulaizo o estoque do arquivo central;
            rewind(arqc);
            free (t);
            t=  (temp*) calloc (1,sizeof(temp));
            fclose(arqt);
            condparada = 0;
        }
        if (c == 'F')
            condparada=1;
    }while(condparada != 1);

    rewind(arqh);

    hist = (historico*) calloc(1,sizeof(historico));

    while ((fread(hist,sizeof(historico),1,arqh))) // conta quantos tem dessa estrutura dentro do arquivo
    {
		contlog++;
	}
	printf("Contlog %d",contlog);

    free(hist);
    hist = (historico*) calloc(contlog,sizeof(historico));
    rewind(arqc);
    fread (hist,sizeof(historico),contlog,arqh);
    // Agora meu arquivo de historico está atualizado;

    fclose(arqt);
    fclose(arqh);
    fclose(arqc);
    printconfere(j,central,hist,contlog);

    return 0;
}
