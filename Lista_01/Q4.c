/*4- Carregue dois vetores A e B de números inteiros com 40 e 50 elementos respectivamente. Desenvolva um programa para gerar
um terceiro VETOR C com os elementos diferentes existentes nos vetores A e B.*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetA[40],vetB[50],vetC[10];	
	int i;
	
	//Gerar número aleatório de A
	for(i=0;i<40;i++){
		vetA[i]=rand() % 100;
		fflush(stdin);
	}
	//Gerar número aleatório de B
	for(i=0;i<50;i++){
		vetB[i]=rand() % 100;
		fflush(stdin);
	}
	
	//Gerar número aleatório de C
	for(i=0;i<10;i++){
		
	}

	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
