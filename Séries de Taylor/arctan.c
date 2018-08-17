#include<stdio.h>


int main ()
{
    int b,n,j; // b= variável auxiliar, n=i=j são contadores
    float x,fatn=1,pot=1;
    float m=10,p,arctang=0.0;

    do
    {
        printf("DIGITE O VALOR DE X\n");
        scanf("%f",&x);
    }while(x<-1 || x>1);

    do
    {
        printf("DIGITE O VALOR DE P\n");
        scanf("%f",&p);
    }
    while(p < 0.000001 || p > 0.01);

    for (n=0; m>p ; n++)
    {
        b= 2*n+1;
        pot=1;

        for(j=1 ;j<=b ; j++)
        {
            pot = pot * x;
        }


        if (n % 2 == 0)
          arctang += (pot/b);
      	else
          arctang += (-1) * (pot/b);
      m = pot/b;

    }
    printf("%f\n",arctang);

    return 0;
}
