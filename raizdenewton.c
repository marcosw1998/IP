#include <stdio.h>
#include <stdlib.h>

int main()
{

    int c,n=0; // c= constante da raiz, n= contador usado para o total de iterações, x= valor da função
    float x,p;
    float xa;
    float m;
    printf("Digite o valor do qual a raiz sera obtida : \n");
    scanf("%d",&c);
    x = c/2.0;

    do
    {
        printf("Digite a precisao: \n");
        scanf("%f",&p);
    }while(p<0.0001 || p>0.01);

    do
    {
            xa = x;
            x = x - ((x*x - c)/(2*x));
            m = xa - x;
            printf("x atual %.4f\n",x);

    }while(m>p);

    printf("\nRaiz aproximada = %.4f\n",x);
    system ("PAUSE");
	return 0;
}
