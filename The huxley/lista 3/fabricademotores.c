// fábrica de motores

#include<stdio.h>

int main ()
{
    int motor0[13], motor1[13], i=0,j=0,c=0,m=0,w=0; // i= contador
    double custo[2],lucro[2],prod0[13],lucro0[13], anualc0 = 0,anual0 =0 ; // anualc0,anual0 === anual custo motor 0 e anual lucro motor0
    double prod1[13],lucro1[13],anualc1 = 0 , anual1=0;                                                             //anualc1,anual1 === anual custo motor 1 e anual lucro motor 1

        for(i=0; i<12 ; i++ )
        {
            scanf("%d",&motor0[i]);
            scanf("%d",&motor1[i]);
        }

        for(j=0; j<2 ; j++)
        {
            scanf("%lf",&custo[j]);
            scanf("%lf",&lucro[j]);
        }


         for( w=0; w<12 ; w++ )
        {
            prod0[w]= motor0[w] * custo[0];
            lucro0[w] = motor0[w] * lucro[0];
            anualc0 = prod0[w] + anualc0;
            anual0 = lucro0[w] + anual0;
        }
          for( w=0; w<12 ; w++ )
        {
            prod1[w]= motor1[w] * custo[1];
            lucro1[w] = motor1[w] * lucro[1];
            anualc1 = prod1[w] + anualc1;
            anual1 = lucro1[w] + anual1;
        }




        for (m=0 ; m<12 ; m++)
        {
		printf("Motor[0], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n",m+1, prod0[m], lucro0[m]);
        }

        for (m=0 ; m<12 ; m++)
        {
		printf("Motor[1], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n",m+1, prod1[m], lucro1[m]);
        }

        printf("Motor[0], anual, custo=[%.2lf], lucro=[%.2lf]\n",anualc0,anual0);
        printf("Motor[1], anual, custo=[%.2lf], lucro=[%.2lf]\n",anualc1,anual1);


    return 0;

}
