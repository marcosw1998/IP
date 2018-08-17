#include<stdio.h>
#include<stdlib.h>


int main ()
{
int x,xa,y,z,w,m;

    scanf("%d",&x);

        w= x % 10;
            m = (x/10) ;
            z = m % 10;
                y = m/10;
                y %= 10;
                    x = m/100;
                    xa = x % 10;
        if(w!=0)
        printf("%d%d%d%d",w,z,y,xa);
            else
                if (z!=0)
                printf("%d%d%d",z,y,xa);
                    else
                    if (y!=0)
                    printf("%d%d%d",z,w);
                     else  printf("%d",xa);



    return 0;
}
