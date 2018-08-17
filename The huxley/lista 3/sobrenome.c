// Última palavra de uma frase

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[401]= {0};
    int tam=0,i=0,x=0,c=0;

    scanf (" %[^\n]",nome);

    tam = strlen(nome); // recebe o tamanho da string

    for( i = tam - 1 ; i>=0 ; i--)  // A cada vez que rodo o for, ele vai comparar se achou o espaço
    {
            if ( nome[i] == ' ')    // Se entrar na condição, a ideia e que eu printe os caracteres após o espaço
            {
                for ( x = i+1 ; x < tam ; x++) // i+1 para não pegar o espaço novamente, só os caracteres após o espaço
                {
                    printf("%c",nome[x]);
                    c++;
                }
                i=0; // Para atingir a condição de saída do laço mais externo
            }
    }

        if (c==0)
        {
            printf("%s",nome);
        }

    return 0;
}
