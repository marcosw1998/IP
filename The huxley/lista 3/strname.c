#include <stdio.h>
#include <string.h>

int main()
{
    char nome[104] = {0},invertnome[104] = {0};
    int n=0,i=0,m=0,j=0;

    do
    {
       // printf("Digite o valor de n: ");
        scanf("%d",&n);
    }while(n<1 || n >104);

    do
    {
        //printf("Digite o nome: ");
        scanf(" %[^\n]",nome);
        m = strlen(nome);
            if (m<=103)
            {
                for( i=0 ; i<m; i++) // Primeira passada, altera em +3 os caracteres seundo a tabela ASCII
                {
                    if ((nome[i] >= 65 && nome[i]  <=90) || (nome[i] >= 97 && nome[i]  <=122))
                    {
                                nome[i] += 3;
                    }
                  }

                for( i=0,j=m-1; i<=m ; i++, j--)
                {
                        invertnome[i] = nome[j];
                }


                for( i = m/2; i<m; i++)
                {
                    invertnome[i] -= 1;
                }

                n--;
            }
        printf("%s\n",invertnome);

        }while(n>0);

    return 0;
}
