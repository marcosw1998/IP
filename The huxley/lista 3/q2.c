#include <stdio.h>

int main (){

int x,y,c=0;

    scanf("%d %d",&x,&y);

    if (x<=y){
        for(; x<=y ; x++){
            if(x>=0){
                c++;
            }
        }
            printf ("%d\n",c);
    }else if (x>y){
        for(; y<=x ; y++){
            if(y>=0){
                c++;
            }
        }
        printf ("%d\n",c);
    }

    return 0;
}
