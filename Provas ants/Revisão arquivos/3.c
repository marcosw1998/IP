#include <stdio.h>
#include <stdlib.h>

int main(){
	int qntNumeros;
	FILE *arquivo;
	int *num , i, cont=0;
	int aux;

	arquivo = fopen("numeros.bin","rb");
	if ( arquivo == NULL) exit(1);

	num = (int*) malloc( 1 * sizeof(int));

	while (fread(num,sizeof(int),1,arquivo)){
		cont++;
	}

	free(num);
	rewind (arquivo);

	num = (int*) malloc( cont * sizeof(int));

    fread(num,sizeof(int),cont,arquivo);

    if (cont%2 == 0){
        for(i=0;i<cont/2;i++){
            aux = num[i];
            num[i] = num[cont-1-i];
            num[cont-1-i] = aux;
        }
	}

	else{
        for(i=0;i<((cont-1)/2);i++){
            aux = num[i];
            num[i] = num[cont-1-i];
            num[cont-1-i] = aux;
        }
	}

	for(i=0;i<cont;i++){
		printf("%d ", num[i]);
	}

	free(num);
	fclose(arquivo);

	return 0;
}
