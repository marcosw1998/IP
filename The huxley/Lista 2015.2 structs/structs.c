#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct data
{
    int d;
}data;

typedef struct cadast
{
    char nome[30];
    int data[3],id,adm;
    float salario;
}empregado;

typedef struct zica
{
    char nome[30],tipo[30];
    int x;

}bandas;

void band()
{
    int n,i;
    bandas *b;

    scanf("%d",&n);
    b = (bandas*) malloc (n * sizeof(bandas));

    for(i=0;i<n;i++)
    {
        scanf("%s %s",b[i].nome,b[i].tipo);
        scanf("%d",&b[i].x);
    }
    compb(b,n);

}
void compb(bandas *b,int n)
{
    int i,maior,cont=0,aux=0;

    for(i=0;i< n-cont-1;i++)
    {
        for(i=0;i<n-1;i++)
        {
            if (b[i].x >= b[i+1].x)
            {
                maior = b[i].x;
                aux = i;
            }
            else
            {
                maior = b[i+1].x;
            }
        }
        printf("Maior atual %d\n",maior);
        aux = i;
        printban(b,aux,n,cont);
    }
}

void printban( bandas *b,int aux, int n, int *cont)
{
    int i;

    printf("%s\n",b[aux].tipo);

    for(i=0;i<n;i++)
    {
       if (strcmp(b[i].tipo,b[aux].tipo) == 0)
            printf("%s\n",b[i].nome);
            b[i].x = 0;
            printf("Entrei\n");
            cont++;
            printf("cont atual = %d\n",cont);
    }

}

void dif()
{
    int i;
    data *r,*q;

    r = (data*) calloc ( 3, sizeof(data));
    q = (data*) calloc ( 3, sizeof(data));

    for(i=0;i<3;i++)
    {
        scanf ("%d", &r[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf ("%d", &q[i]);
    }

    for(i=0;i<3;i++)
    {
        r[i].d = r[i].d - q[i].d;
    }

    for(i=0;i<3;i++)
    {
        if (i==1)
            printf ("0%d ",r[i]);
        else
            printf ("%d ",r[i]);
    }

}

void cadastro()
{
    empregado *p;
    int i,m=0,n;
    int num;
    char *b,url[8]="cad.txt";
    FILE *arq;

    arq = fopen(url,"r+");
    if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");

    printf("Quantos funcionarios vao ser cadastrados ?\n");
    fscanf(arq,"%d\n",&n);
    printf("%d\n",n);

    p = (empregado*) malloc (n* sizeof(empregado));
    b = (char*) malloc(30 * sizeof(char));

    printf("Agora iremos cadastrar %d funcionarios\n\n",n);

    for(i=0;i<n;i++)
    {
        printf("Qual seu nome?\n");
        fscanf( arq," %[^\n]",p[i].nome);

        printf("Data de nascimento, na forma: DD/MM/AAAA\n");
        fscanf(arq,"%d %d %d\n",&p[i].data[0],&p[i].data[1],&p[i].data[2]);

        printf("RG:\n");
        fscanf(arq,"%d",&p[i].id);

        printf("Trabalha aqui desde o ano:\n");
        fscanf(arq,"%d",&p[i].adm);

        printf("Quanto recebe atualmente?\n");
        fscanf(arq,"%f",&p[i].salario);
        if (i==0)
            {
                printf("%d funcinario ja foi cadastrado!\n",i+1);
                printf("Ainda faltam %d\n",n-i-1);
            }
        if(i!=0 && i<n-1)
            {
                printf("%d funcionarios ja foram cadastrados!\n",i+1);
                printf("Ainda faltam %d\n",n-i-1);
            }
        if (i == n-1)
            printf("Parabens, todos foram cadastrados com sucesso!\n\n");
    }

    printf("Quer pesquisar os dados de algum funcionario?\n Se sim digite 0\n");
    fscanf(arq,"%d",&m);

    while(m==0)
    {
        printf("Quem deseja procurar ?");
        fscanf(arq," %[^\n]",b);
        num = busca(p,n,b);

    if (num == n+1)
        printf("O funcionario %s nao consta no nosso banco de dados\n",b);
    else
        print(p,num);

        printf("Deseja continar a consulta? Se sim digite 0\n");
        fscanf(arq,"%d",&m);
        printf("\n");
    }

    printf("Foi um prazer te ajudar\nVolte sempre!");
    free(b);
    free(p);
    fclose(arq);
}


int busca(empregado *p, int n, char *b)
{
    int i, m = n+1;

    for(i=0;i<n;i++)
    {
        if (strcmp (p[i].nome,b) == 0)
        {
            printf("Achei\n");
            m = i;
        }

    }
        return m;
}

void print(empregado *p, int i)
{
    p[i].data[2]= 2016 - p[i].data[2];
    p[i].adm= 2016 - p[i].adm;

    printf("O funcionario %s\n",p[i].nome);

    if( p[i].data[1]<10)
        printf("Faz %d anos no dia: %d mes: 0%d \n", p[i].data[2],p[i].data[0],p[i].data[1]);
    else
        printf("Ele faz %d anos no dia: %d mes: %d \n", p[i].data[2],p[i].data[0],p[i].data[1]);

    printf("Possui o RG = %d\nFaz parte da Marcosoft ha %d anos\n",p[i].id,p[i].adm);
    printf("E a ultima informacao que consta no nosso sistema e o seu salario\nQue atualmente gira em torno de %.2f R$\nTenha um bom dia chefinho!\n\n",p[i].salario);
}

int main()
{
   // dif();
    cadastro();
    //band();

    return 0;
}

