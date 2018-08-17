#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[50];
	int idade;
}dados;

int main(){
	FILE *arquivo;
	dados pessoa;
	int num;
	int i, j;

	scanf("%d", &num);
	arquivo = fopen("struct.bin","rb");

	fseek(arquivo, num * sizeof(dados),SEEK_SET);
	fread(&pessoa,sizeof(dados),1,arquivo);
	printf("%s %d", pessoa.nome, pessoa.idade);

	fclose(arquivo);
	return 0;
}
