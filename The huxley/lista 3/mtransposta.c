#include<stdio.h>

int main()
{
    int i=0,j=0,l,c;
    int m[10][10], mt[10][10];

    scanf("%d %d",&l,&c);
    for(i=0; i<l; i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("\n");

    printf("%d %d\n",l,c);
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            mt[j][i] = m[i][j];
            printf("[%d][%d] = [%d][%d]\n", j, i, i, j);
        }
    }

    for(i=0; i<l; i++)
    {
        for(j=0;j<c;j++)
        {
         printf("%2d",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
         printf("%2d",mt[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
//Programa que realiza a multiplica��o entre duas matrizes.


#include <stdio.h>

int main() {

  int i1, j1, i2, j2, i, j, k, m1[50][50], m2[50][50], m3[50][50];

  printf("\n==========MULTIPLICACAO DE MATRIZES==========\n");
  printf("\nMatriz 1\n==========\n");
  printf("\nDigite o numero de linhas...: ");
  scanf("%d", &i1);
  printf("Digite o numero de colunas..: ");
  scanf("%d", &j1);
  printf("\nMatriz 2\n==========\n");
  printf("\nDigite o numero de linhas...: ");
  scanf("%d", &i2);
  printf("Digite o numero de colunas..: ");
  scanf("%d", &j2);
  if (j1 == i2) {
    printf("\nValores da Matriz 1\n=====================\n\n");
    for (i=0; i<i1; i++) {
      for(j=0; j<j1; j++) {
        printf("Digite um valor para [%d][%d].: ", (i+1), (j+1));
        scanf("%d", &m1[i][j]);

      }

    }

    printf("\nValores da Matriz 2\n=====================\n\n");
    for (i=0; i<i2; i++) {
      for (j=0; j<j2; j++) {
        printf("Digite um valor para [%d][%d].: ", (i+1), (j+1));
        scanf("%d", &m2[i][j]);

      }

    }

    for (i=0;i<i1; i++)
    {
        for (j=0; j<i1; j++)
        {
            for (k=0; k<j1; k++)
            {
                m3[i][j] = m3[i][j] + (m1[i][k] * m2[k][j]);
            }
        }

    }

    printf("\nMatriz 3\n=====================\n\n");

    for (i=0; i<i1; i++)
    {
      for (j=0; j<j2; j++)
      {
          printf("%d ", m3[i][j]);
      }
          printf("\n");
    }
    printf("\n");
  }

  else
      printf("\nErro! Impossivel multiplicar as matrizes informadas.\n");


  return 0 ;

}
*/
