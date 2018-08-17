#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,soma=0; // m= contador
    do{
        scanf("%d",&n);
        if(n>=10000 || n<=0)
            printf("Valor fora do intervalo permitido\n");
    }while (n>=10000 || n<=0 );

        for(m=n; m>0; m--){
            scanf("%d",&n);
            soma=soma+n;
        }
    printf("%d\n",soma);
return 0;
}
