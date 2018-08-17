#include <stdio.h>
/*
Prova 1 27/04/16
Aluno: Marcos William Almeida Cavalcanti
Editor de textos
*/

int main()
{
    char editor[40][81], palavra[40][101],branco=' ',zera[40][101]; // Matrizes usadas
    int c=0,i=0,j=0,d=0,tam=0,k=0,m=0,pala=0; // Contadores
    int pl=0,pc=0; // Local onde vou colocar a palavra

    for(i=0;i<40;i++) // atribuir espaço em branco a toda a matriz
    {
        for(j=0;j<81;j++)
        {
            editor[i][j] = zera[branco][branco];
        }
    }

    for(i=0;i<40;i++) // atribuir espaço em branco a toda a matriz
    {
        for(j=0;j<101;j++)
        {
            editor[i][j] = zera[branco][branco];
        }
    }


    do
    {
        if(d!=0)
        {
            printf("Fora do intervalo permitido, digite novamente: \n");
            scanf("%d",&c);
        }
        if(d==0)
        {
            printf("Digite a quantidade de colunas: \n");
            scanf("%d",&c);
            d++;
        }
    }while(c<50 || c>80);


    while(palavra[pala]!='.') // Caso o caraccter '.' for digitado sai do laço
    {
        printf("Digite a frase: ")
        scanf(" %s",palavra[pala]);

        if(palavra[pala]!='.') // Verifico a condição para continuar
        {

        for(tam=0; palavra[tam] != '\0'; tam++) // "strlen"
    {
        printf("Tamanho da palavra %d\n",tam); // para conferência
    }
            scanf("%d %d",&pl,&pc);

            for(i=pl; i<pl+1; i++) // Só vai rodar uma vez, vai começar na linha que eu selecionei e terminar na seguinte
            {
                for(j=pc,k=0; pc < tam; j++)
                {
                    if(editor[i][j] == ' ') // Condições válidas, verificar se tá em branco
                    {
                        editor[i][j] = palavra[i][j];
                        if(editor[i][j]>[i][c]) // Caso ultrapasse a coluna, vai para a próxima linha
                        {
                            if(editor[i+1][k] == palavra[zera][j]) // Verifica se tá em branco
                            {
                                editor[i+1][k]= editor[i][j]; // Caso esteja ele coloca o caractere
                                k++;
                            }
                        }
                    }

                    if(editor[i][j-1] ==' ' && editor[i][j+1]!= ' ') // primeira letra de uma palavra
                    {
                            for(m=j; m != ' '; m++) // Aqui eu vou saber onde é o final da frase

                            for(; m<j ; m--)
                            {
                                editor[i][m] = editor[i][m-1]; // vou realocar a frase para a direita
                            }

                            editor[i][j] = editor[i][branco]; // a posição onde tava  primeira letra, vai virar espaço

                         if(editor[i][j]>[i][c]) // Caso ultrapasse os 80 caracteres, vai para a próxima linha
                        {
                            if(editor[i+1][k] == palavra[zera][j]) // Verifica se tá em branco
                            {
                                editor[i+1][k]= editor[i][j]; // Caso esteja ele coloca o caractere
                                k++;
                            }
                        }
                    }
                }
            }
         pala++;
        }
    }


    for(i=0; i<40; i++)
    {
        for(j=0; j<c/2; j++) // c\2 garante que só vá até o meio da frase
        {
            if (editor[i][j] != ' ')
            {
                for(m=j,k=0; m != ' '; m++,k++) // tentativa de pegar a primeira frase que esteja na linha,e colocar no início
                {
                    editor[i][k] = editor[i][m];
                    editor[i][m] = editor[i][zera]; // substituo o caractere existente por espaço
                }
            }
        }
        for(j=c/2; j>0 ;j--) // Garantia que só vai até o meio da frase
        {
             if (editor[i][j] != ' ')
            {
                for(m = j,k = c; m != ' '; m--,k--) // tentativa de pegar a ultima frase que esteja na linha,e colocar no final justificado
                {
                    editor[i][k] = editor[i][m];
                    editor[i][m] = editor[i][zera]; // substituo o caractere existente por espaço e sai do loop
                }
            }
        }
        printf("\n");
    }


    for(i=0; i<40; i++) // Printar a matriz justificada
    {
        for(j=0; j<c; j++)
        {
            printf("%c",editor[i][j]);
        }
        printf("\n");
    }

    return 0;
}
