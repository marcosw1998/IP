#include<stdio.h>
#include<string.h>

int apareceu(char palavra[], char c)
{
    int i, qtd = 0;

    for(i=0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == c)
        {
            qtd++;
        }
    }
    return qtd;
}

void apaga(char* palavra,char c)
{
    int tam,i,j;

    tam = strlen(palavra);

    for(i=0; palavra [i] != '\0'; i++)
    {
        if(palavra[i] == c)
        {
            for(j=i; j<tam; j++) // Quando eu achar a tetra, eu a substitui pela próxima e assim por diante até o \0
            {
                palavra[j] = palavra[j+1];
            }
            i-=1;
        }
    }

}


void apagarepet(char* palavra)
{
     int i,j,cont;
     char c;


    for(i=0; palavra[i] != '\0'; i++)
    {
        cont =0;
        c = palavra[i];

        for(j=i; palavra[j] != '\0'; j++)
        {
            if(palavra[j] == c)
            {
                cont++;
            }
            if (cont>=2)
            {
                apaga(palavra,c);
                printf("%c foi repetido e apagado, agora a palavra e %s\n",c,palavra);
                cont=0;
                i= -1;
            }
        }
    }
}

void gago(char* palavra)
{
    int i,j;
    char aux[200];
    for(i=0;i < strlen(palavra)*2+1; i++)
    {
            aux[i]= ' ';
    }
    for(i=0, j=0; i < strlen(palavra); i++,j+=2)
    {
        if (palavra[i] == ' ')
        {
            j-=1;
        }
        aux[j] = palavra[i];
    }
    printf("Depois de quase gago fica %s\n",aux);

    for(i=0, j=1; aux[i] != '\0'; i+=2,j+=2)
    {
        if(aux[i] == ' ')
        {
            j-=1;
        }
        aux[j]= aux[i];
    }
    printf("Depois de gago fica %s\n",aux);

    for(i=0;i < strlen(aux)-1; i++)
    {
        palavra[i] = aux[i];
        printf("%c",palavra[i]);
    }

    for(;i<strlen(palavra); i++)
    {
        palavra[i]= '\0';
    }
}


int main()
{
    int qtd;
    char palavra[100],c;

    printf("Digite a palavra\n");
    scanf("%[^\n]",palavra);


    //printf("Digite a letra: ");
    //scanf(" %c",&c);

    //qtd = apareceu(palavra,c);

    //printf("%c apareceu na palavra %dx\n",c,qtd);

    //apaga (&palavra,c);
    //printf("Palavra apos a retirade de %c= %s",c,palavra);

    //apagarepet(&palavra);
    //printf("Palavra atual apos retirada das repeticoes %s",palavra);
    gago(palavra);
    printf("Palavra depois da gaga %s\n",palavra);

    return 0;


}
