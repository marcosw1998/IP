#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
    int x;

    printf("Digite o ano que voce quer verificar se e bissexto: ");
    scanf("%d",&x);

    if (x % 400 == 0){
            printf("%d e ano bissexto",x);}
    if (x % 4 == 0 && x % 100 !=0) {
            printf("%d e ano bissexto",x);}
    else printf("%d nao e bissexto",x);

    return 0;

}
