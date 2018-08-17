#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct data
{
    int d,m,a;
}data;

int main()
{
    FILE *p;
    data *s;
    data *v;
    int g;
    p= fopen("arq.txt","r+");
    s= (data*) calloc(1,sizeof(data));
    v= (data*) calloc(1,sizeof(data));
//s[0].a = 1998;
//s[0].d = 17;
//s[0].m = 03;

    if (p==NULL || s==NULL || v==NULL )
    {
        printf("Eeroou\n");
        exit(1);
    }
    //scanf("%d %d %d",&s[0].d,&s[0].m,&s[0].a);
    //fwrite(s,sizeof(data),1,p);
    rewind(p);
    fread(v,sizeof(data),1,p);
    printf("%d %d %d",v[0].d,v[0].m,v[0].a);

    return 0;
    }
