// �ltima palavra de uma frase

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[401]= {0};
    int tam=0,i=0,x=0,c=0;

    scanf (" %[^\n]",nome);

    tam = strlen(nome); // recebe o tamanho da string

    for( i = tam - 1 ; i>=0 ; i--)  // A cada vez que rodo o for, ele vai comparar se achou o espa�o
    {
            if ( nome[i] == ' ')    // Se entrar na condi��o, a ideia e que eu printe os caracteres ap�s o espa�o
            {
                for ( x = i+1 ; x < tam ; x++) // i+1 para n�o pegar o espa�o novamente, s� os caracteres ap�s o espa�o
                {
                    printf("%c",nome[x]);
                    c++;
                }
                i=0; // Para atingir a condi��o de sa�da do la�o mais externo
            }
    }

        if (c==0)
        {
            printf("%s",nome);
        }

    return 0;
}
