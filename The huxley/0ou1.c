#include<stdio.h>


int main ()
{
    int x,y,z;

        scanf(" %d %d %d",&x,&y,&z);

            if(x!=y && x!=z)
            {
                printf("A\n");
            }
            if(x!=y && x==z)
            {
                printf("B\n");
            }
            if(x==y && x!=z)
            {
                printf("C\n");
            }
            if ( x==y && x==z){
               printf("*\n");
            }


    return 0;
}
