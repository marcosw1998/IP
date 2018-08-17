#include <stdio.h>
#include <stdlib.h>

// Faltou o 3. do 1o quesito, que era demonstrar os divisores de um inteiro x.

int main(){
    //Programa calcula a fatorial e se o número é dividido perfeitamento por k
    int i,div; //contador auxiliar usado para não perder o valor de x e y
    int x,fat_x=1;
    int k,resto; // k= divisor de x, resto= Para saber se o valor é divisivel por k ou não;

    printf("Digite o valor de X: ");
    scanf("%d",&x);

    if(x==0) printf ("Fatorial de X = 1");
    else if(x<0) printf("O valor digitado nao pode ser calculado");
    else {
        for(i = x ; i >= 1 ; i--){
            fat_x = i * fat_x;
        }
        printf("Valor da fatorial de x = %d\n", fat_x);
    }

    do{
    printf("Digite o valor de K: ");
    scanf("%d",&k);
    div = x/k ;
    resto = div % 2;
    }while(k<=0);{
     //   printf("O programa nao aceita esse valor\n"); Era pra ser usado quando o valor de k <= 0, e continuar no loop
     // Caso o valor não fosse digitado, continuava
        if (resto == 1)
        printf("A divisao por %d nao e exata \n",k);
        if (resto == 0)
        printf("A divisao por %d e exata \n",k);   }

    system ("PAUSE");
    return 0;
}
