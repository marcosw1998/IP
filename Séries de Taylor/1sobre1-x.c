#include<stdio.h>


int main ()
{
    int b,n,j; // b= variável auxiliar, n=i=j são contadores
    float x,pot=1;
    float m=10,p,w=0.0,want;

    do
    {
        printf("Digite o valor de x entre [-1,1]: ");
        scanf("%f",&x);
    }while(x<-1 || x>1);

    do
    {
        printf("Digite o valor da precisao\n");
        scanf("%f",&p);
    }
    while(p < 0.000001 || p > 0.01);

    for (n=0; m>p ; n++)
    {
        if (n==0)
        {
        pot=1;
        }else
        for(j=1 ;j<=n ; j++)
        {
          pot = pot * x;
        }

        want= w;

        printf("w ant = %f\n",want);
        w= pot;
        printf("w atual = %f\n",w);
        m= w - want;
        if (m<0){
            m= m*(-1);
        }
        printf("m atual = %f\n",m);

    }
    printf("%f\n",w);

    return 0;
}
