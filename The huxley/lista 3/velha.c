#include<stdio.h>

int main ()
{
    int n=0,i=0,j=0,x=0,o=0,xvenceu=0,ovenceu=0;
    char velha[3][3];
    int  contlx=0,contdx=0,contdx2=0,contcx1=0,contcx2=0,contcx3=0;          // Contadores para saber se X ganhou
    int  contlo=0,contdo=0,contdo2=0,contco1=0,contco2=0,contco3=0;          // Contadores para saber se C ganhou

     scanf ("%d",&n);

     while(n>0)
    {   contlx=contdx=contdx2=contcx1=contcx2=contcx3=contlo=contdo=contdo2=contco1=contco2=contco3=i=j=x=o=0;

            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    scanf(" %c",&velha[i][j]);

                    if( velha[i][j] == 'X')
                    {
                        x++;
                    }
                    if( velha[i][j] == 'O')
                    {
                        o++;
                    }
               }
           } // Até aqui, eu apenas peguei os caracteres da matriz

        // Todas as possiblidades de x vencedor
        for(i=0 ; i<3 ; i++)
        {
            for(j=0; j<3 ; j++)
            {
                if(velha[i][j]=='X')
                {
                    contlx++; // Analisando na linha
                }

                if (contlx==3 && contlo<3)
                {
                    xvenceu++;
                    break;
                }

                if(velha[i][j]=='O')
                {
                    contlo++; // Analisando na linha
                }

                if (contlo==3 && contlx<3)
                {
                    ovenceu++;
                    break;
                }


                    if(i==j)
                    {
                        if(velha[i][j]=='X'  && ovenceu==0)
                        {
                            contdx++; // Quando chegar em 3, quer dizer que X=ganhou
                        }
                        if (contdx==3)
                        {
                            xvenceu++;
                            break;
                        }
                            if(velha[i][j]=='O' && xvenceu==0)
                            {
                                contdo++; // Quando chegar em 3, quer dizer que O=ganhou
                            }
                            if (contdo==3)
                            {
                                ovenceu++;
                                break;
                            }
                    }
                        if(velha[0][2] == 'X' && velha[1][1] == 'X' && velha[2][0] == 'X'  && ovenceu==0) // Funcionando Tecnicamente
                        {
                            contdx2++;
                        }
                        if (contdx2==3)
                        {
                            xvenceu++;
                            break;
                        }
                            if(velha[0][2] == 'O' && velha[1][1] == 'O' && velha[2][0] == 'O' && xvenceu==0)
                            {
                                contdo2++;
                            }
                            if (contdo2==3)
                            {
                                ovenceu++;
                                break;
                            }

                                if(j==0 && velha[i][0]=='X' && ovenceu==0) // Analisar colunas
                                {
                                    contcx1++;
                                }
                                if(contcx1==3)
                                {
                                    xvenceu++;
                                    break;
                                }
                                if(j==1 && velha[i][1]=='X'  && ovenceu==0) // Analisar colunas
                                {
                                    contcx2++;
                                }
                                    if(contcx2==3)
                                {
                                    xvenceu++;
                                    break;
                                }
                                if(j==2 && velha[i][2]=='X'  && ovenceu==0) // Analisar colunas
                                {
                                    contcx3++;
                                }
                                 if(contcx3==3)
                                {
                                    xvenceu++;
                                    break;
                                }
                                // Colunas de O
                                    if(j==0 && velha[i][0]=='O' && xvenceu==0) // Analisar colunas
                                    {
                                        contco1++;
                                    }
                                    if(contco1==3)
                                    {
                                        ovenceu++;
                                        break;
                                    }
                                    if(j==1 && velha[i][1]=='O' && xvenceu==0) // Analisar colunas
                                    {
                                        contco2++;
                                    }
                                    if(contco2==3)
                                    {
                                        ovenceu++;
                                        break;
                                    }
                                    if(j==2 && velha[i][2]=='O' && xvenceu==0) // Analisar colunas
                                    {
                                        contco3++;
                                    }
                                    if(contco3==3)
                                    {
                                        ovenceu++;
                                        break;
                                    }

                }
            contlx = 0;
            contlo = 0;
            }
        if(ovenceu>1 || xvenceu>1 || (ovenceu==1 && xvenceu==1) || x>5 || o>4||((x - o) >=2) || ((o-x)>0) || o>x || (xvenceu==1 && x<=o) || (ovenceu==1 && o<x))
        {
            printf("ILEGAL\n");
        }

	else if(ovenceu==1)
	{
	    printf("O_VENCEU\n");
	}

	else if(xvenceu==1)
	{
	    printf("X_VENCEU\n");
	}

	else if(ovenceu == 0 && xvenceu == 0)
	{
	   printf("EM_ANDAMENTO\n");
	}
    xvenceu=0;
    ovenceu=0;
    n--;
    }

    return 0;
}
