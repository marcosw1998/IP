#include <stdio.h>
#include <stdlib.h>

int main(){
    //Programa calcula a fatorial
    int i; //contador auxiliar usado para não perder o valor de x e y
    int x,fat_x=1;
    int k,z=0; // k= divisor de x, z= valor divisivel ou não

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
    printf("Digite o valor de K: ");
    scanf("%d",&k);

    //if (k ==0 || x%2==0)  return z;
    if(k==0) printf("Nao pode ser dividido por 0");
    else{
        for (i=x; x>=0 ; x--){
        div= x/k;
        if (div%2)==0 printf("Nao e divisivel por %d",k);
        else printf("Divisível por %d",div);
    }
    }
    return 0;
}
