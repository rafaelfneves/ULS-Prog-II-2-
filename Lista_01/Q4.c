/*4- Carregue dois vetores A e B de números inteiros com 40 e 50 elementos respectivamente. Desenvolva um programa para gerar
um terceiro VETOR C com os elementos diferentes existentes nos vetores A e B.*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetA[40],vetB[50],vetC[10],cont;	
	int i,j;
	
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
	
	//Gerar VETOR de C
	for(i=0;i<50;i++){
		for(j=0;j<40;j++){
			//Randomizar cont
			cont=rand() % 100;
			if(cont != vetA[i] && cont != vetB[i])
			vetC[i]=cont;
		}	
	}
	
	//Print A
	printf("|===A===|\n");
	for(i=0;i<40;i++){
		printf("|%d",vetA[i]);
	}
	//Print B
	printf("\n\n|===B===|\n");
	for(i=0;i<50;i++){
		printf("|%d",vetB[i]);
	}
	//Print C
	printf("\n\n|===C===|\n");
	for(i=0;i<10;i++){
		printf("|%d",vetC[i]);
	}
	
	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
