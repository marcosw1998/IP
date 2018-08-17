#include<stdio.h>
#include<string.h>

int main()
{
    int tam=0,n=0,c=0,j=0,m=0,a=0,r=0,g=0,i=0,t=0,margarita=0;
    char palavra[51][601];

    scanf(" %d ",&n);


     for( c=0; c<n ; c++)
     {
        scanf(" %s",palavra[c]);
        for(tam=0; palavra[c][tam] != '\0' ;tam++)
        //tam= strlen(palavra[c]);

            for(j=0; j < tam ; j++)
            {
                if(palavra[c][j]=='M')
                {
                    m++;
                }
                if(palavra[c][j]=='A')
                {
                    a++;
                }
                if(palavra[c][j]=='R')
                {
                    r++;
                }
                if(palavra[c][j]=='G')
                {
                    g++;
                }
                if(palavra[c][j]=='I')
                {
                    i++;
                }
                if(palavra[c][j]=='T')
                {
                    t++;
                }

            if(m>=1 && a>=3 && r>=2 && g>=1 && i>=1  && t>=1)
            {
                margarita++;
                m-=1; a-=3; r-=2; g-=1; i-=1; t-=1;
            }
        }
        printf("%d\n",margarita);
        margarita=0;m=0;a=0;r=0;r=0;g=0;t=0;

     }



    return 0;
}
