#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i, n=0; // Contador usado para n�o perder o valor de x inicial
    float x=0, p;
    float fat_n=1, pot=1; // p = precisao, potencia e fat inicializados em 1 por que um valor elevado a 0 e fatorial de 0, sa� 1.
    float xa=0, m=1, ex=0, ex_ant=0;   // xa foi usado para pegar o valor de x inicial e n�o perder de acordo com os la�os,
    // ex foi a formula, e m vai ser a diferen�a para saber se o valor da diferen�a atingiu a precis�o
    while(x>=0){
        printf("Digite o valor de x: \n");
        scanf("%f",&x);

        do{
            printf("Digite a precisao: \n");
            scanf("%f",&p);
        }while(p<=0.0001 || p>=0.01);

        // for para a precis�o
        for(n = 0 ; m > p ; n++){
            ex_ant = ex;
            fat_n = 1;
            pot = 1;

            if(n==0){
                fat_n = 1;
                pot = 1;
            }else{
                //for gerador de fatorial e potencia
                for(i=n; i>0; i--){
                    fat_n = fat_n * i;
                    pot = pot * x;
                }
            }

            ex += pot/fat_n;
            m = ex - ex_ant;
            printf("ex atual %.4f\n",ex); //Apenas para confeir
        }

        printf("\ne^x = %.4f\n",ex);
    }

    return 0;
}
