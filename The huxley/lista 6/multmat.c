#include<stdio.h>
#include<stdlib.h>

void print(int **matriz, int l, int c)
{
    int i,j;
    for(i=0; i<l; i++)
    {
        for(j=0;j<c;j++)
        {
            if(j<c-1)
            {
                printf("%d ",matriz[i][j]);
            }
            else
                printf("%d",matriz[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int n,m,o;
    int **m1,**m2;
    int **result;
    int i,j,k; // contadores

    scanf("%d %d %d",&n,&m,&o);


    m1= (int**) malloc( n * sizeof(int*));

    for(i=0; i<n; i++)
    {
       m1[i] =(int*) malloc(m * sizeof(int));
        if (m1[i] == NULL)
        {
            printf("erro alocando");
            exit(1);
        }
    }

    for(i=0; i<n ; i++)
    {
        for(j=0; j<m; j++)
        {
          	scanf("%d",&m1[i][j]);
        }
    }

    m2= (int**) calloc(m, sizeof(int*));

    for(i=0; i<m; i++)
    {
       m2[i] =(int*) calloc(o, sizeof(int));
        if (m2[i] == NULL)
        {
            printf("Erro alocando\n");
            exit(1);
        }
    }

    for(i=0; i<m ; i++)
    {
        for(j=0; j<o; j++)
        {
            scanf("%d",&m2[i][j]);

        }
    }

     result= (int**) malloc( n * sizeof(int*));

    for(i=0; i<n; i++)
    {
       result[i] =(int*) malloc(o * sizeof(int));
        if (result[i] == NULL)
        {
            printf("Erro alocando");
            exit(1);
        }
    }

    for (i = 0; i < n; i++)
           {
               for (j = 0; j < o; j++)
               {
                    result[i][j] = 0;

                   for (k = 0; k < n+1; k++)
                   {
                       result[i][j] = result[i][j] + (m1[i][k] * m2[k][j]);
                   }
               }
           }

    print(result,n,o);

    return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>

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
void print(int **matriz, int l, int c)
{
    int i,j;
    for(i=0; i<l; i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

void preenche(int **matriz, int l, int c)
{
    int i,j;

    for(i=0; i<l ; i++)
    {
        for(j=0; j<c; j++)
        {
          	scanf("%d",&matriz[i][j]);
        }
    }

}

void multmat(int **m1, int **m2, int **result, int l, int c)
{
    int i,j,k;

     for (i = 0; i < l; i++)
           {
               for (j = 0; j < c; j++)
               {
                    result[i][j] = 0;

                   for (k = 0; k < l+1; k++)
                   {
                       result[i][j] = result[i][j] + (m1[i][k] * m2[k][j]);
                   }
               }
           }
}

int main()
{
    int n,m,o;
    int **m1,**m2;
    int **result;
    int i,j,k; // contadores

    scanf("%d %d %d",&n,&m,&o);

    aloca(m1,n,m);
    preenche(m1,n,m);

    aloca(m2,m,o);
    preenche(m2,m,o);

    aloca(result,n,o);
    multmat(m1,m2,result,n,o);
    print(result,n,o);


    return 0;
}
*/
