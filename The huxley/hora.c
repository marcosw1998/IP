#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,min,soma=0;

    scanf(" %d",&h);
    scanf(" %d",&min);

    h*=60;
    soma= h + min;

    printf("%d minutos.\n",soma);


return 0;
}
