#include<stdio.h>

void strlen (char nome, int *tam)
{
   for( ;nome[tam] != '\0'; *tam++){}
}

int main()
{
    int tam=0;
    char nome[100];

    scanf("%[^\n]",nome);

    for (tam=0; nome[tam] != '\0'; tam++){}
    strlen (nome,&tam);

    printf("nome = %s tamanho = %d",nome,tam);

    return 0;
}
