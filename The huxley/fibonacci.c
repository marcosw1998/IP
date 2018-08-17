#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib=1, fib_ant=1, a=0,b=1,x,y=0,i;

    do
    {

        fib=1;
        fib_ant=1;
        a=0;
        b=1;
        y=0;

        scanf("%d",&x);

        if (x == 1)   printf("%d",a);
        else if (x == 2)   printf("%d %d",a,b);
        else
        {

            for( i=3 ; i<=x ; i++ )
            {
                fib= y + fib_ant;
                if (i==3)
                {
                    printf("%d %d %d",a,b,fib);
                }
                else
                {
                    printf(" %d",fib);

                }
                y= fib_ant;
                fib_ant=fib;

            }
        }
    printf("\n");
    }

    while(x!=0);


    return 0;
}
