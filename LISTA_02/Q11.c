#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

void random(int vet[80]);
void troca(int vet[80]);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[80];
	int i;
	
	//randomiza
	random(vet);
	troca(vet);
	
	//Imprime
	for(i=0;i<80;i++){
		if(i==0)
			printf("MAIOR: ");
		if(i==79)
			printf("MENOR: ");
	
		printf("%d|",vet[i]);
	}	
	
	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}

void random(int vet[80]){
	
	int i;
	
	for(i=0;i<80;i++){
		vet[i]=rand() % 100;
	}
}

void troca(int vet[80]){
	
	int i;
	int maior=0,menor=9999999,p1,p2;
	
	for(i=0;i<80;i++){
		if(vet[i]>maior)
			maior=vet[i];
			p1=i;
		if(vet[i]<menor)
			menor=vet[i];
			p2=i;
	}
	
	//Troca
	vet[p1]=vet[0];
	vet[p2]=vet[79];
	vet[0]=maior;
	vet[79]=menor;	
}
