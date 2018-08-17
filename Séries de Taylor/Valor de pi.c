#include <stdio.h>

float p, F, D, MOD, PIa = 0.0 , PI = 0.0; //DECLARAÇÃO DAS VARIAVEIS REAIS, SENDO LOOK A VARIAVEL RESPONSÁVEL PELO MODULO DA FUNÇÃO PI(i+1) - PI(i) ** SENDO PI(i) SUBSTITUIDO POR PIa **
int n, check = 0; //DECLARAÇÃOO DAS VARIAVEIS INTEIRAS, SENDO N O N DA FORMULA E CHECK A VARIAVEL COM FUNÇÃO BOOLEANA PARA A SAÍDA DO LAÇO

int main(){
	
	printf("Digite o valor da precisao: \n");
	scanf(" %f", &p); //RECEBE O VALOR DA PRECISÃO
	
	for(n = 0; check != 1; n++){
		   PIa = PI;
		   //CALCULO DA FUNÇÃO SOMATÓRIA
		   F = 4.0/(1.0 + 2.0*n);
		   if(n%2 ==	 0)
		   PI += F;
		   else
		   PI -= F;
		   //CALCULA O MODULO DE PI - PIa
		   MOD = PI - PIa; 
		   if(MOD < 0)
		   MOD *= -1;
		   //CHECA SE O MODULO DE PI - PIa É MENOR QUE A PRECISÃO
		   if(MOD <= p){
		  	check = 1;
		   }
	}
	//PRINTA O RESULTADO
   printf("PI = %f", PI);
}
