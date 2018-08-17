#include <stdio.h>
#include <stdlib.h>

int main(){
	int qntNumeros;
	FILE *arquivo;
	int *num , i;

	scanf("%d", &qntNumeros);

	num = (int*) malloc (qntNumeros * sizeof(int));
	if (num == NULL) exit(1);

	arquivo = fopen ("numeros.bin","wb");
	if (arquivo==NULL) exit(1);

	for(i=0;i<qntNumeros;i++){
		num[i] = i ;
	}
	fwrite(num,sizeof(int),qntNumeros,arquivo);

	free(num);
	fclose(arquivo);
	return 0;
}