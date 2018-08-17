#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand((unsigned)time(NULL));
    int sudoku[9][9], i, j, numero, k, l, v[9], taok = 1;


    do
    {
        taok = 1;
        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                numero = 1 + (rand() % 9);
                printf("%d ", numero);
                sudoku[i][j] = numero;

            }
            printf("\n");
        }
        puts("to aqui");
        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                v[j] = 0;

            }
            for(j=0; j<9; j++)
            {
                v[sudoku[i][j] - 1] = 1;
            }
            for(j=0; j<9; j++)
            {
                if(v[k]==0)
                {
                    taok = 0;

                }
            }
        }
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                for(k=0; k<9; k++)
                {
                    v[k] = 0;
                }
                for(k=i*3; k<i*3+3; k++)
                {
                    for(l=j*3; l<j*3+3; l++)
                    {
                        v[sudoku[k][l] - 1] = 1;
                    }
                }
                for(k=0; k<9; k++)
                {
                    if(v[k]==0)
                    {
                        taok = 0;
                    }
                }
            }
        }
        printf("ta ok  = %d\n",taok);
    }
    while(taok == 0);

    return 0;

}
