#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i;

    scanf("%d",&n);
    scanf("%d",&m);

    for( i=n ; i<=m; i++){
        if(i%2!=0)
            printf("%d\n", i);
    }

    return 0;
}
