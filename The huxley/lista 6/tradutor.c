#include<stdio.h>

int main()
{
    int n,l,m; // n= regras de substituições, m = linhas do texto
    int tam1=0,tam2=0,tamlavra=0,i=0,j=0,k=0,acheil=2;
    char s[100][100],pal1[100][100],pal2[100][100];
    char ap[100][100],np[100][100];

    scanf("%d %d",&n,&m);

    while( n != 0 && m != 0)
    {
        for( i=0; i<n ; i++)
        {
            scanf("[^\n]",s[i]);
            for(tamlavra=0; s[i][tamlavra] != '\0'; tamlavra++){} // tamanho total da palavra

            printf("Palavra 1\n");
            for(tam1=0; s[i][tam1] != ' '; tam1++)  // Recebendo e printando a 1a palavra
            {
                printf("%c",s[i][tam1]);
                pal1[i][tam1] = s[i][tam1];
            }
            printf("\nPalavra 2\n");

            for(tam2=tamlavra; s[i][tamlavra] != ' '; tam2-- )
            {
                printf("%c",s[i][tam2]);
            }
            printf("\n");

            for( j=0; s[i][tam2] != '\0'; tam2++,j++ ) // Recebendo a 2a palavra
            {
                 pal2[i][j] = s[i][tam2];
            }
        }
          tam2= tamlavra - tam2;

/*
        for(j=0; j<m; j++)
        {
            scanf("[^\n]",ap[j])
        }

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++) // Tecnicamente aqui é a hora de comparar pal1 com pal2 na frase de ap, e transformar
            {
                if(ap[i][j] == pal1[i][0])
                {
                    if(ap[i][j+1] == pal1[i][1])
                    {
                        for( k=2; k < tam1; k++)
                        {

                             if(ap[i][j+k] == pal1[i][k])
                            {
                                acheil++;
                            }
                            if(acheil == tam1)
                            {
                                for( j=j; j < tam2; j++)
                                {
                                    if(ap[i][j] !=' ')
                                    {
                                        ap[i][j] = pal2[i][j];
                                    }
                                    else // caso encontre um caractere!= de espaço, jogo a frase pra direita, e substituo por ' ' o caractere
                                    {
                                        for( tamlavra=tamlavra ;tamlavra>j; tamlavra--) // vai até onde achei o espaço
                                        {
                                            ap[i][tamlavra+1] = ap[i][tamlavra];
                                        }
                                        ap[i][j] = ' ';
                                        ap[i][j-1] = 'c'; // gambiarra, para fazer funcionar a condição, transformo o epaço em c
                                        tam2++;     // para não contar esse procedimento de colocar a palavra pro lado
                                    }
                                }
                            }
                        }
                    }
                }

            }
        }


*/
    scanf("%d %d",&n,&m);

    }


    return 0;
}
