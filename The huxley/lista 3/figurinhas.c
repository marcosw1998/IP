#include<stdio.h>

int main ()
{
    int n=0, x[10001], xj[10001], xm[10001], somaj=0, somam=0, cond=0,soma=0;
    int m=0,j=0,i=0,c=0,d=0; //Contadores das figurinhas para João e Maria

    scanf("%d",&n);

    for( i = 0; i < n ; i++)
    {
        scanf("%d",&x[i]);

         if (x[i] % 2 == 0)
         {
            xj[j] = x[i];
            j++;
        }
        else
        {
            xm[m] = x[i];
            m++;
        }
    }
        // j e m são o tamanho dos vetores de pares e impares

    for( i=0; i < j ; i++)
    {
        for( c=0 ; c < i ; c++)
        {
        	if (xj[i] == xj[c])
            {
                cond=1;
            }
        }
            if (cond==0)
      	    {
                somaj+= xj[i];
            }
                cond = 0;
    }

    for( i=0; i < m ; i++)
    {
        for( c=0 ; c < i ; c++)
        {
         	if (xm[i] == xm[c])
            {
                cond=1;
            }
        }
            if (cond==0)
      	    {
                somam+= xm[i];
                printf("Valor atual de somam %d\n",somam);
            }
                cond = 0;
    }

    if(somaj >= somam)
    {
        soma= somaj;
    }
    else
    {
        soma= somam;
    }


    printf("%d\n%d\n%d\n",j,m,soma);


    return 0;
}
