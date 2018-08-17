#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,x,fat_x; //i=contador auxiliar usado para não perder o valor de x

    do
    {
        scanf("%d",&x);
        fat_x = 1;

        if(x>=0 && x<=12)
        {
            for(i = x ; i >= 1 ; i--)
            {
                fat_x = i * fat_x;
            }
            printf("%d\n", fat_x);
        }
    }    while(x!= -1);

    return 0;
}
