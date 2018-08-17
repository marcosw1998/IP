/*
#include<stdio.h>
#include<string.h>

void som( char *x, char *y, char *soma, int maior)
{
    int i,j,m=0,aux=0;

    for(i= maior-1, j=maior; j>=0; i--,j--)
    {
        if (x[i] > 47 && m == 0)
            x[i] = x[i] - 48;

        if (y[i] > 47 && m == 0)
            y[i] = y[i] - 48;

        if (soma[j] > 47 && m == 0)
            soma[j] = soma[j] - 48;

        if(m==0)
            soma[j] = x[i] + y[i];// preciso de uma condição para números de tamanho diferente

        if (soma[j]>=10) // para que só some até certo ponto, depois passe o maior direto
        {
            if (soma[1]>=10)
            {
                aux= soma[1];
                soma[1] = soma[1] % 10;
                soma[0] = aux / 10;
                m = 1;
            }
                if (m==0)
                {
                    soma[j]= soma[j]%10;
                    x[i-1] = x[i-1] + 1;
                }
        }

    }
    printf("\n");
    if (m==0)
    {
        for(j=1; j <= maior; j++)
        {
            printf("%d",soma[j]);
        }
    }

    else
    {
        for(j=0; j <= maior; j++)
        {
            printf("%d",soma[j]);
        }
    }

}
int main ()
{

    int i,j,m=0,aux=0,tamx,tamy,maior;
    char *x,*y,*soma;

    x = (char *) calloc(10,sizeof(char));
    y = (char *) calloc(10,sizeof(char));

    if(x==NULL || y==NULL)
        printf("Erro na alocacao!\n");
    printf("Digite x\n");

    for(i=0; x[i] != '\n'; i++)
    {
        if ( i%10 == 0)
        {
            x = (char *) realloc(x,i+10*sizeof(char));
        }
          scanf(" %c",x[i]);
    }

    printf("Digite y\n");

    for(i=0; y[i] != '\n'; i++)
    {
        if (i % 10 == 0)
        {
            y = (char *) realloc(y,i+10*sizeof(char));
        }
          scanf(" %c",y[i]);
          printf("%c",y[i]);
    }

    tamx= strlen(x);
    tamy= strlen(y);

    if (tamx >= tamy)
    {
        soma= (char *) calloc(tamx+1,sizeof(char));
        maior= tamx;
    }
    else
    {
        soma= (char *) calloc(tamy+1,sizeof(char));
        maior= tamy;
    }

   som(x,y,soma,maior);

    return 0;
}
 Funcionando, porém sem aloc dinâmica */

#include<stdio.h>
#include<string.h>

void som( char *x, char *y, char *soma, int maior)
{
    int i,j,m=0,aux=0;

    for(i= maior-1, j=maior; j>=0; i--,j--)
    {
        if (x[i] > 47 && m == 0)
            x[i] = x[i] - 48;

        if (y[i] > 47 && m == 0)
            y[i] = y[i] - 48;

        if (soma[j] > 47 && m == 0)
            soma[j] = soma[j] - 48;

        if(m==0)
            soma[j] = x[i] + y[i];// preciso de uma condição para números de tamanho diferente

        if (soma[j]>=10) // para que só some até certo ponto, depois passe o maior direto
        {
            if (soma[1]>=10)
            {
                aux= soma[1];
                soma[1] = soma[1] % 10;
                soma[0] = aux / 10;
                m = 1;
            }
                if (m==0)
                {
                    soma[j]= soma[j]%10;
                    x[i-1] = x[i-1] + 1;
                }
        }

    }
    printf("\n");
    if (m==0)
    {
        for(j=1; j <= maior; j++)
        {
            if(soma[j] !=0 && m==0)
                m=1;

            if (m==1)
            printf("%d",soma[j]);
        }
    }

    else
    {
        for(j=0; j <= maior; j++)
        {
            if(soma[j] !=0 && m==0)
                m=1;

            if (m==1)
            printf("%d",soma[j]);
        }
    }

}
int main ()
{

int i,j,m=0,aux=0,tamx,tamy,maior;
char *x,*y,*soma;

    x = (char *) calloc(10000000,sizeof(char));
    y = (char *) calloc(10000000,sizeof(char));

    scanf(" %s",x);

    scanf(" %s",y);

    tamx= strlen(x);
    tamy= strlen(y);

    if (tamx > tamy)
    {
        soma= (char *) calloc(tamx+1,sizeof(char));
        maior= tamx;

        for(i=maior, j=tamy; i>0 ; j--,i--)
        {
            if(j>=0)
            {
                y[i] = y[j];
                y[j] = '0';
            }
            else
                y[i] = '0';
        }

      //  printf("Apos mudanca para tam igual\n");
       // printf("%s\n",y);

    }
    if (tamy > tamx)
    {
        soma= (char *) calloc(tamy+1,sizeof(char));
        maior= tamy;

        for(i=maior, j=tamx; i>0 ;j--,i--)
        {
            if(j>=0)
            {
                x[i] = x[j];
                x[j] = '0';
            }
            else
                x[i] = '0';
        }

       // printf("Apos mudanca para tam igual\n");
      // printf("%s\n",x);
    }

     if (tamy == tamx)
    {
        soma= (char *) calloc(tamx+1,sizeof(char));
        maior= tamx;
    }

    som(x,y,soma,maior);

    return 0;
}

