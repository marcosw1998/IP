#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    int quadrado=1, cubo=1;

    do{
    scanf("%d",&n);
    if(n<1 || n > 1000) {
        printf("Fora do intervalo permitido\n");
    }
    else{
    for( i=1 ; i<=n; i++){
        quadrado=i*i ;
        cubo= i*i*i;
        printf("%d %d %d\n",i,quadrado,cubo);
                       }
    }
    }while (n<1 || n>1000);

    return 0;
}
