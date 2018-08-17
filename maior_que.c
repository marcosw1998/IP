#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Programa que mostra qual o maior número dentre x e Y
    int x,y;

    printf("Digite o valor de X: ");
    scanf("%d",&x);
      printf("Digite o valor de Y: ");
      scanf(" %d",&y);

    if (x>y)
        printf("O valor de X e maior. X=%d > Y=%d",x,y);
      else if (x<y)
          printf("O valor de Y e maior. Y=%d > X=%d",y,x);
         else
            printf("Os valores de X=%d e Y=%d sao iguais",x,y);

    return 0;
}


