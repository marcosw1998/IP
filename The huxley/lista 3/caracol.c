#include<stdio.h>

int main()
{
    int i=0,j=0,n=0;
    int mat[100][100];
    scanf("%d ",&n);
																// fiz tentando me basear na 4x4, a ideia foi
																// n � um valor definir� l e c
																// vou ler
																//i=0 j=0 e incrementando o i
																//i+1 j=0 leio at� i=n-1
                                //ap�s isso leio i=n-1 j+1 at� j=n-1
																//ap�s isso leio i=n-1 j=n at� i=0
																//ap�s isso leio i=0 j-1 at� j=1
																//ap�s isso leio i+1 j=1 at� n-1
																//ap�s isso leio j+1 e i=n-1 at� j=n-1
																//ap�s isso leio i-1 e j= n-1
                                // tudo errado, eu sei kkk



    for(i=0; i<n; i++)
    {
        if(i<n)
        {
            scanf("%d",&mat[i][j]); // preenche a coluna
        }
            for(j=0; j<n; j++)
            {
                if(j<n)
                {
                    scanf("%d",&mat[i][j]); // preenche a �ltima linha
                }
                if (j == n-1)
                {
                    for(i=n-1; i=0; i--)
                    {
                        scanf("%d",&mat[i][j]); // preenche a �litma coluna
                    }
                        if (i==0)
                        {
                            for(j=n-1; j<1; j--)
                            {
                                scanf("%d",&mat[i][j]); // preenche a primeira linha menos a primeira letra que j� tem
                            }
                            if(j==1)
                            {
                                for(i=0; i<n-2; i++)
                                {
                                    scanf("%d",&mat[i][j]); // tentativa de preencher a 2a coluna
                                }
                                    if(i==n-2)
                                    {
                                     for(j=1; j<n-2; j++)
                                     {
                                        scanf("%d",&mat[i][j]); // tentativa de preencher a pen�ltima linha
                                     }
                                     if(j==(n-2))
                                     {
                                         for(i = n-2; i > 1 ;i--)
                                        {
                                            scanf("%d",&mat[i][j]); // tentativa de preencher a 3a coluna
                                        }
                                     }

                                    }
                            }
                        }
                }
            }

    }
		// pra printar e conferir a matriz
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%c",mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
