#include<stdio.h>

int main ()
{
    int x,i,y=0,r1=0,a=0,r2=0,r3=0; // r = registrador a= acumulador
    // Estou considerando o 00, e 0i, como apenas um número

    do
    {
        printf("\nDigite x: ");
        scanf("%d",&x);
        printf("Digite i: ");
        scanf("%d",&i);


            if( x==0)   //READ R_I
                {
                    if (i == 1)
                    {
                        printf("Digite o valor de R1: \n");
                        scanf("%d",&r1);
                        printf("Valor atual de R1= %d\n",r1);
                    }
                     if (i == 2)
                    {
                        printf("Digite o valor de R2: \n");
                        scanf("%d",&r2);
                        printf("Valor atual de R2= %d\n",r2);
                    }
                    if (i == 3)

                    {
                        printf("Digite o valor de R3: \n");
                        scanf("%d",&r3);
                        printf("Valor atual de R3= %d\n",r3);
                    }
                x=1; // Para não sair do laço
             }

            // Para não sair do laço e não entrar em outra condição

            if( x==4)// WRITE R_I
            {

              if (i==1)
                {
                printf("Valor atual de R1: %d\n",r1);
                }
                if (i==2)
                {
                printf("Valor atual de R2: %d\n",r2);
                }
                if (i==3)
                {
                printf("Valor atual de R3: %d\n",r3);
                }

            }
            if( x==5 ) // LOAD R_I
            {
               if(i==1)
               {
               a = r1;
               printf("Atribui o valor de 'r1' para 'a', 'a' agora e %d\n",a);
               }
               if(i==2)
               {
               a = r2;
               printf("Atribui o valor de 'r2' para 'a', 'a' agora e %d\n",a);
               }
               if(i==3)
               {
               a = r3;
               printf("Atribui o valor de 'r3' para 'a', 'a' agora e %d\n",a);
               }
            }

            if( x==6) // STORE R_I,A
            {
                if(i==1)
                {
                    r1 = a;
                    printf("Atribui o valor de 'a' para 'r1', 'r1' agora e %d\n",r1);
                }
                if(i==2)
                {
                    r2 = a;
                    printf("Atribui o valor de 'a' para 'r2', 'r2' agora e %d\n",r2);
                }
                if(i==3)
                {
                    r3 = a;
                    printf("Atribui o valor de 'a' para 'r3', 'r3' agora e %d\n",r3);
                }

            }

            if( x==7 ) // ADD R_I
            {
               if(i==1)
               {
               a = r1 + a;
               printf(" 'r1' + 'a'= %d\n",a);
               }
               if(i==2)
               {
               a = r2 + a;
               printf(" 'r2' + 'a'= %d\n",a);
               }
               if(i==3)
               {
               a = r3 + a;
               printf(" 'r3' + 'a'= %d\n",a);
               }

            }

            if( x==8) // SUB R_I
            {
               if(i==1)
               {
               a = a - r1;
               printf(" 'r1' - 'a'= %d\n",a);
               }
               if(i==2)
               {
               a = a - r2;
               printf(" 'r2' - 'a'= %d\n",a);
               }
               if(i==3)
               {
               a = a - r3;
               printf(" 'r3' - 'a'= %d\n",a);
               }

            }

            if(x==9)
            {
                if(i==0) // RESET R_I
                {
                    a = 0;
                    printf("Atribue 0 ao valor de 'a'= %d\n",a);
                }
                if(i==1)
                {
                    r1 = 0;
                    printf("Atribue 0 ao valor de 'r1'= %d\n",r1);
                }
                if (i==2)
                {
                    r2 = 0;
                    printf("Atribue 0 ao valor de 'r2'= %d\n",r2);
                }
                if (i==3)
                {
                    r3 = 0;
                    printf("Atribue 0 ao valor de 'r3'= %d\n",r3);
                }
                i=3; // Usado para fazer com que o i, tecnimante zere, para poder entrar no laço novamente;
            }

    }while( x!=0 && i!=0); // END
    printf("\nA= %d, R1 = %d, R2= %d, R3= %d \n",a,r1,r2,r3);

return 0;
}


