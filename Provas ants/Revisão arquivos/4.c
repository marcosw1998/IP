#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	FILE *arquivo;
	char frase[101];
	char **frases;
	int cont=0, i, *tamString, numFrase;

	printf("Digite o numero da frase que quiser pirraia: ");
	scanf("%d", &numFrase);

	arquivo = fopen("texto.txt","r");
	//if(arquivo == NULL) exit(1);

	while ( fgets(frase,100,arquivo) != NULL){
            cont ++;
	}

	rewind (arquivo);

	tamString = (int*) malloc(cont * sizeof(int));
	if ( tamString == NULL) exit(1);

	for (i=0;i<cont;i++){
		tamString[i] = 0;
	}

	i=0;
	while ( fgets(frase,100,arquivo) != NULL){
			while (frase[tamString[i]] != '\0'){
				tamString[i]++;
			}
			i++;
	}

	rewind(arquivo);

	frases = (char**) malloc(cont * sizeof(char*));
	if (frases == NULL) exit(1);

	for (i=0;i<cont;i++){
		frases[i] = (char*) malloc (tamString[i] * sizeof(char));
		if(frases[i] == NULL) exit(1);
	}

	i=0;
	while ( fgets(frases[i],100,arquivo) != NULL){
		i++;
	}

	printf("%s", frases[numFrase-1]);

    for (i=0;i<cont;i++){
		free(frases[i]);
	}

	free(frases);
	free(tamString);
	fclose(arquivo);
	return 0;
}
