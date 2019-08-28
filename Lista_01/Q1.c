/*
1- Carregue um vetor de inteiros com 100 posições e desenvolva um programa para:
a) Exibir o maior elemento e sua posição;
b) Imprimir a soma dos elementos que estão nos índices pares;
c) Exiba a soma dos elementos impares.
*/
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[100],maior=0,menor=999,soma=0;
	int i;
	for(i=0;i<100;i++){
		
		//NUMERO ALEATORIO
		vet[i]=rand() % 10000;
		printf(" %d ",vet[i]);
		
		//TESTES MAIOR | MENOR | IMPAR
		if(vet[i]>maior)
			maior=vet[i];
		if(vet[i]<menor)
			menor=vet[i];
		if(vet[i] % 2 != 0)
			soma+=vet[i];
	}
	
	printf("\n\nMAIOR: %d",maior);
	printf("\nMENOR: %d",menor);
	printf("\nSOMA DOS ÍMPARES: %d",soma);
	
	printf("\n\n\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;
	
	
}
