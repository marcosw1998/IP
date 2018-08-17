#include <stdio.h>
#include <stdlib.h>
#include <math.h> // usada para sqrt

  {
    int a,b,c; // Variáveis da função delta
    int delta; //f(x) = Ax² + Bx + C
    int x1,x2; // valores das raízes

    printf("Digite o valor de A : ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);
    printf("Digite o valor de C: ");
    scanf("%d",&c);

    delta = ((b*b) + ((-4) * a * c));

    if(delta>=0)// Delta não pode ser negativo {
        x1 = (-b - sqrt(delta))/ (a*2);
        printf("\nPrimeira raiz real x' = %d\n",x1);
        x2 = (-b + sqrt(delta))/ (a*2);
        printf("Segunda raiz real x'' = %d\n",x2);
    }else{
        printf("\nNao ha raiz real");
    }
    return 0;
  }


