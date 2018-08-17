#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[50];
	int idade;
}dados;

int main(){
	FILE *arquivo;
	dados *pessoa;
	int num;
	int i, j;

	scanf("%d", &num);
	arquivo = fopen("struct.bin","wb");

	pessoa = (dados*) malloc(num * sizeof(dados));
	if(pessoa == NULL) exit(1);

	for(i=0;i<num;i++){
		scanf(" %s %d", pessoa[i].nome, &pessoa[i].idade );
	}

	fwrite(pessoa,sizeof(dados),num,arquivo);

	free(pessoa);
	fclose(arquivo);
	return 0;
}
