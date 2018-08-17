#include <stdio.h>

int main (){
int i,m[100],x;

printf("Quantos numeros voce quer inverter? ")
scanf("%d",&i);
prinf("Digite o numero: ")
scanf("%d",&x);

for ( ; i>=0 ;i--){

    m= x % 10;
    x= x[i]/10;
    printf("%d",m[i]);
}

}
