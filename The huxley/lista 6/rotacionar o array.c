#include <stdio.h>

void rot(int vet,int d,int n,int *vetn)
{
    int i,j,k;

    for(i=0, j=d; j<n; j++, i++) // passando o vetor a partir de d
    {
        (*vetn)[i] = (vet)[j];
    }

    printf("Vetor novo a partir de d:\n");
    for(k=0; k<d; k++)
    {
       printf("%d ",(*vetn)[k]);
    }

    for(j=0 ; j<d ; j++,i++) // Completando o vetor novo
    {
        (*vetn)[i] = vet[j];
    }


}


int main ()
{
    int i,j,n,d;
    int k;
    int vet[100000],vetn[100000];

    printf("Digite a qtd de elementos do vetor: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&vet[i]);
    }


    printf("Digite a qtd de deslocamentos a esquerda: ");
    scanf("%d",&d);

    rot(vet,d,n,&vetn);


    printf("Vetor novo completo\n");
    for(k=0; k<n; k++) // Vetor novo completo
    {
       printf("%d\n",vetn[k]);
    }


}
