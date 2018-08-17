#include<stdio.h>
#include<stdlib.h>

int **aloca(int **matriz, int l, int c)
{
    int i;

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

		return matriz;
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

int **preenche(int **matriz, int l, int c)
{
    int i,j;

    for(i=0; i<l ; i++)
    {
        for(j=0; j<c; j++)
        {
          	scanf("%d",&matriz[i][j]);
        }
    }

  	return matriz;
}

int **multmat(int **m1, int **m2, int **result, int l, int c)
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
  	return result;
}

int main()
{
    int n,m,o;
    int **m1,**m2;
    int **result;

    scanf("%d %d %d",&n,&m,&o);

    m1 = aloca(m1,n,m);
    m1 = preenche(m1,n,m);

    m2 = aloca(m2,m,o);
    m2 = preenche(m2,m,o);

    result = aloca(result,n,o);
    result = multmat(m1,m2,result,n,o);
    print(result,n,o);

    return 0;
}
