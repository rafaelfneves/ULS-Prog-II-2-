/*5. Escreva uma fun��o potenciaInt(base, expoente) que retorne o valor
de base-expoente. N�o use nenhuma das fun��es da biblioteca matem�tica. */
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int potenciaInt(int base,int exp);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int base,exp;
	
	printf("Escreva o valor da Base e Expoente: \n");
	scanf("%d %d",&base,&exp);
	
	printf("\nBase: %d",base);
	printf("\nExpoente: %d",exp);
	printf("\nPotencia: %d",potenciaInt(base, exp));

	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[� 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}

int potenciaInt(int base,int exp){
	
	int i,pot;
	
	for(i=0;i<exp;i++){
		
		pot=base;
		pot=pot*exp;
	}
	
	return pot;
}
