    #include<stdio.h>
    #include<stdlib.h>

    typedef struct lua
    {
        int cod;
        char desc[100];
        float preco;

    }card;

    void result(card *p,int n)
    {
        int x,y,i=0;
        float pag=0.0,z;


        do{
            scanf("%d",&x);

            if (x!=0)
            {
                scanf("%d",&y);

                if (y>0)
                {
                    for(i=0;i<n;i++)
                    {
                        if (x == p[i].cod)
                        {
                            z = p[i].preco;
                            pag= pag + (z * y);
                        }
                    }
                }
            }
        }while(x!=0);
            printf("%.2f\n",pag);

    }




    int main()
    {
        int i,n;
        card *p;

        scanf("%d",&n);

        p = (card *) malloc(n * sizeof(card));

        for(i=0;i<n;i++)
        {
            scanf("%d",&p[i].cod);
            scanf(" %[^\n]",p[i].desc);
            scanf("%f",&p[i].preco);
        }

        result(p,n);


    return 0;


    }
