/*2- Carregue um vetor de números reais com 80 posições e desenvolva um programa para encontrar o maior e o menor valor. Após
isto, o programa deverá trocar o maior valor com o da primeira posição e o menor valor com o da última posição.*/
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define tam 10
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float vet[tam],maior=0,menor=9999;
	float trocaMaior=0,trocaMenor=0;
	int i,flag1,flag2;
	
	for(i=0;i<tam;i++){
		printf("Digite n%d: ",i+1);
		scanf("%f",&vet[i]);
		system("cls");
		
		if(vet[i]>maior)
			maior=vet[i];
		if(vet[i]<menor)
			menor=vet[i];
	}
	
	//Insere maior no inicio e menor no fim
	vet[0]=maior;
	fflush(stdin);
	vet[tam-1]=menor;
	
	for(i=0;i<tam;i++){
		printf(" %.1f |",vet[i]);
	}
	
	printf("\nMAIOR: %.1f \nMENOR: %.1f",maior,menor);


	printf("\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}



