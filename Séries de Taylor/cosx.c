#include<stdio.h>


int main ()
{
    int b,n,i,j; // b= variável auxiliar, n=i=j são contadores
    float x,fatn=1,pot=1;
    float m=1,p,cos=0.0;

    scanf("%f",&x);
    do
    {
        scanf("%f",&p);
    }
    while(p < 0.000001 || p > 0.01);

    for (n=0; m>p ; n++)
    {
        b= 2*n;
        pot=1;
        fatn=1;
        for(i=b ; i>1 ; i--) // Faça isso enquanto a condição não for atingida
        {
            fatn = fatn * i;
        }

        for(j=1 ;j<=b ; j++)
        {
            pot = pot * x;
        }

        if (n%2==0)
        {
        cos = cos + (pot/fatn);
        }else {
        cos = cos - (pot/fatn);
        }
        m= pot/fatn;

    }
    printf("%f",cos);

    return 0;
}
