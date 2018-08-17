#include<stdio.h>


int main ()
{
    int b,n,i,j;
    float x,fatn=1,pot=1;
    float m=1,p,sen=0.0;

    scanf("%f",&x);
    do
    {
        scanf("%f",&p);
    }
    while(p < 0.000001 || p > 0.01);

    for (n=0; m>p ; n++)
    {
        b= 2*n + 1;
        pot=1;
        fatn=1;
        for(i=b ; i>1 ; i--)
        {
            fatn = fatn * i;
        }

        for(j=1 ;j<=b ; j++)
        {
            pot = pot * x;
        }

        if (n%2==0)
        {
        sen = sen + (pot/fatn);
        }else {
        sen = sen - (pot/fatn);
        }
        m= pot/fatn;

    }
    printf("%f",sen);

    return 0;
}
