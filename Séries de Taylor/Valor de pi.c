#include <stdio.h>

float p, F, D, MOD, PIa = 0.0 , PI = 0.0; //DECLARA��O DAS VARIAVEIS REAIS, SENDO LOOK A VARIAVEL RESPONS�VEL PELO MODULO DA FUN��O PI(i+1) - PI(i) ** SENDO PI(i) SUBSTITUIDO POR PIa **
int n, check = 0; //DECLARA��OO DAS VARIAVEIS INTEIRAS, SENDO N O N DA FORMULA E CHECK A VARIAVEL COM FUN��O BOOLEANA PARA A SA�DA DO LA�O

int main(){
	
	printf("Digite o valor da precisao: \n");
	scanf(" %f", &p); //RECEBE O VALOR DA PRECIS�O
	
	for(n = 0; check != 1; n++){
		   PIa = PI;
		   //CALCULO DA FUN��O SOMAT�RIA
		   F = 4.0/(1.0 + 2.0*n);
		   if(n%2 ==	 0)
		   PI += F;
		   else
		   PI -= F;
		   //CALCULA O MODULO DE PI - PIa
		   MOD = PI - PIa; 
		   if(MOD < 0)
		   MOD *= -1;
		   //CHECA SE O MODULO DE PI - PIa � MENOR QUE A PRECIS�O
		   if(MOD <= p){
		  	check = 1;
		   }
	}
	//PRINTA O RESULTADO
   printf("PI = %f", PI);
}
