/*
4
CARRO
CASA
DINHEIRO
AMOR
5 10
CARROOLDAS
DADAKRDKAD
DASDARODAD
AADADAKDSG
CAMORCASAC*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n,c=0,i=0,j=0,l=0,cont=0,mw=0;
    int acheil=2,acheili=2,acheic=2,acheici=2,acheidp=2,acheidpi=2,acheids=2,acheidsi=2;
    char palavra[30][81], mcp[100][101];

    do
    {
        if(c!=0)
        {
            printf("Fora do intervalo, digite novamente :");
            scanf("%d",&n);
        }
            if(c==0)
            {
            printf("Quantas palavras deseja procurar? ");
            scanf("%d",&n);
            c++;
            }

    }while(n<=0 || n>30);// garantia do intervalo permitido

        for (i=0; i<n; i++)
        {
            scanf(" %s",palavra[i]);
        } //palavras que serão buscadas no cp, n sei se tá certo

    printf("Digite a quantidade de linhas e colunas respectivamente: ");
    scanf ("%d %d",&l,&c);

        for(i=0; i<l; i++)
        {
                scanf(" %s",&mcp[i]);
        }
        printf("\n");

        while(n>0)
        {

        for(i=0; i < l; i++)//começa a caçada
        {
            mw=0;
            for(j=0; j<c; j++)
            {
                if(mcp[i][j] == palavra[i][0])
                {
                    if(mcp[i][j+1] == palavra[i][1])// Analisando na linha
                    {
                        for(cont=2; cont<strlen(palavra); cont++)
                        {
                            if(mcp[i][j+cont] == palavra[i][cont])
                            {
                                acheil++;
                            }

                            if(acheil==strlen(palavra))
                            {
                                printf("%d %d HORIZONTAL\n",i,j);
                                mw=1;
                            }
                        }
                    }

                    if(mcp[i][j-1] == palavra[i][1]) // Analisando na linha inversamente
                    {
                        for(cont=2; cont<strlen(palavra); cont++)
                        {
                            if(mcp[i][j-cont] == palavra[i][cont])
                            {
                                printf("Entrei\n");
                                acheili++;
                            }

                            if(acheili == strlen(palavra))
                            {
                                printf("%d %d HORIZONTAL\n",i,j);
                                mw=1;
                            }
                        }
                    }


                     if(mcp[i+1][j] == palavra[i][1]) // Analisando na coluna
                    {
                        for(cont=2; cont<strlen(palavra); cont++)
                        {
                            if(mcp[i+cont][j]==palavra[i][cont])
                            {

                                acheic++;
                            }

                            if(acheic==strlen(palavra))
                            {
                                printf("%d %d VERTICAL\n",i,j);

                                mw=1;
                            }
                        }
                    }

                    if(mcp[i-1][j] == palavra[i][1])  // Analisando na coluna inversamente
                    {
                        for(cont=2; cont<strlen(palavra); cont++)
                        {
                             printf("Entrei\n");
                            if(mcp[i-cont][j]== palavra[i][cont])
                            {
                                acheici++;
                                printf("Tamanho atual de acheici %d\n",acheici);
                            }

                            if(acheici==strlen(palavra))
                            {
                                printf("%d %d VERTICAL\n",i,j);
                                mw=1;
                            }
                        }
                    }

                     if(mcp[i+1][j+1] == palavra[i][1])   // Analisando na diagonal principal
                    {
                        for(cont=2; cont<strlen(palavra); cont++)
                        {
                            if(mcp[i+cont][j+cont] == palavra[i][cont])
                            {
                                acheidp++;
                            }

                            if(acheidp == strlen(palavra))
                            {
                                printf("%d %d DIAGONAL\n",i,j);
                                mw=1;
                            }
                        }
                    }

                     if(mcp[i-1][j-1] == palavra[i][1])  // Analisando na diagonal principal inversamente
                    {
                        for(cont=2; cont< strlen(palavra); cont++)
                        {
                            if(mcp[i-cont][j-cont] == palavra[i][cont])
                            {
                                acheidpi++;
                            }

                            if(acheidpi == strlen(palavra))
                            {
                                printf("%d %d DIAGONAL\n",i,j);
                                mw=1;
                            }
                        }
                    }


                if(mcp[i+1][j-1] == palavra[i][1]) // Analisando na diagonal secundária indo
                {
                    {
                        for(cont=2; cont<strlen(palavra); cont++)
                        {
                            if(mcp[i+cont][j-cont] == palavra[i][cont])
                            {
                                acheids++;
                            }

                            if(acheids == strlen(palavra))
                            {
                                printf("%d %d DIAGONAL\n",i,j);
                                mw=1;
                            }
                        }
                    }
                }

                if(mcp[i-1][j+1] == palavra[i][1]) // Analisando na diagonal secundária voltando
                {
                    {
                        for(cont=2; cont< strlen(palavra); cont++)
                        {
                            if(mcp[i-cont][j+cont] == palavra[i][cont])
                            {
                                acheidsi++;
                            }

                            if(acheidsi == strlen(palavra))
                            {
                                printf("%d %d DIAGONAL\n",i,j);
                                mw=1;
                            }
                        }
                    }
                }



            }


            }

        }

        if (mw==0)
        printf("PALAVRA NAO ENCONTRADA\n");
         n--;
    }


    return 0;
}
