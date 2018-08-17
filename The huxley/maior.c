#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x,y,z;

    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    if(x==y && x==z ){
            printf("%d\n%d\n%d\n",x,y,z);
                    }
    if (x==y && x!=z){
        if (x<z) {
            printf("%d\n%d\n%d\n",x,y,z);
        }
    }
    if (x==y && x!=z){
        if (x>z) {
            printf("%d\n%d\n%d\n",z,y,x);
        }
    }
    if (x!=y && x==z){
        if (x<y) {
            printf("%d\n%d\n%d\n",x,z,y);
        }
    }
    if (x!=y && x==z){
        if (x>y) {
            printf("%d\n%d\n%d\n",y,z,x);
        }
    }

    if (y==z && y!=x){
        if (x>y) {
            printf("%d\n%d\n%d\n",z,y,x);
        }

    }
    if (y==z && y!=x){
        if (x<y) {
            printf("%d\n%d\n%d\n",x,z,y);
        }

    }




    if (x>y)
    {
        if(x>z)
        {
            if (y>z)
            {
                printf("%d\n%d\n%d\n",z,y,x);
            }
        }
    }

    if(x>y)
    {
        if (x>z)
        {
            if (y<z)
            {
                printf("%d\n%d\n%d\n",y,z,x);
            }
        }
    }

    if (x<y)
    {
        if (y>z)
        {
            if(x>z)
            {
                printf("%d\n%d\n%d\n",z,x,y);
            }
        }
    }

    if (x<y)
    {
        if (y>z)
        {
            if(x<z)
            {
                printf("%d\n%d\n%d\n",x,z,y);
            }
        }
    }


    if(z>x)
    {
        if (z>y)
        {
            if(x>y)
            {
            printf("%d\n%d\n%d\n",y,x,z);
            }
        }
    }

    if(z>x)
    {
        if (z>y)
        {
            if (x<y)
            {
                printf("%d\n%d\n%d\n",x,y,z);
            }
        }
    }

    return 0;
}
