#include <stdio.h>
#include <stdlib.h>

void scm(int n, float **m)
{
     int i,j;
      for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (j>i)
            {
                printf("m[%d][%d]\n",i,j);
                scanf("%f",&m[i][j]);
            }
        }
    }
}

void printm(int n, float **m)
{
    int i,j;

     for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(j>i)
            printf ("%.1f ",m[i][j]);
                else if (i==j)
                    printf(" -  ");
                        else if (i>j)
                        printf("    ");
        }
        printf("\n");
    }
}

void q2()
{
    int i,j;
    int n;
    float **m;

    scanf("%d",&n);

    m= (float**) malloc (n*sizeof(float*));

    for (i=0;i<n;i++)
    {
        m[i] =(float*) calloc (n,sizeof(float));
            if(m[i] == NULL)
            {
                printf("Errrou\n");
                exit(1);
            }
    }

    scm(n,m);
    printm(n,m);
}

typedef struct C_R
{
    float c,r;
}C_R;

void somatorio (int n, float mc, float mr, C_R *som)
{
    int i;

    float b=0.0,a=0.0,y;
    float difx=0.0,dify=0.0;
    float difxq=0.0;

    printf("MC=%.1f MR=%.1f\n",mc,mr);

    for(i=0;i<n;i++)
    {
        dify = (som[i].c - mc);
        printf("dify = %.1f ,",dify);
        difx = (som[i].r - mr);
        printf("difx = %.1f \n",difx);
        difxq = (difx * difx);
        printf("difxquadrado = %.1f\n",difxq);
        if (difx==0 && dify ==0 && difxq==0)
            b=0;
        else
        b= b+ ((difx * dify) /difxq);
        printf("b = %.1f\n",b);
        }
        a= (mc - (b*mr));
        printf("a = %.1f\n",a);
        //y = ((a*som[i].r) + b);
        printf("y= %.1fx + %.1f\n",a,b);


}


int main()
{
    //q2();

    int n,i;
    C_R *som;
    float mc=0.0,mr=0.0;

    printf("Digite o valor de n: ");
    scanf("%d",&n);

    som = (C_R*) calloc(n,sizeof(C_R));

    if (som == NULL)
    {
        printf ("Fufu\n");
        exit (1);
    }

    for(i=0;i<n;i++)
    {
        scanf(" %f",&som[i].c);
        scanf(" %f",&som[i].r);
        mc = mc + som[i].c;
        mr = mr + som[i].r;
    }
        mc= mc/n;
        mr= mr/n;
        somatorio(n,mc,mr,som);

    return 0;
}
