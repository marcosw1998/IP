#include<stdio.h>

int main()
{
    int i,n,k;
    char t1[100][20], t2[100][20];

    scanf("%d %d",&n,&k);

    for(i=0;i<n;i++)
    {
        scanf(" %s",t1[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",t1[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0; j<strlen(t1[i]); j++)
        {
            if (t1[i][0] < t1[i+1][0])
            {
                t2[i][j] = t1[i][j];
            }

        }
    }



    return 0;
}
