/*3- Carregue um vetor de 50 elementos inteiros e não ordenados. Leia um determinado número e pesquise se o mesmo existe no
VETOR. Caso exista, imprimir seu valor e em que posição ele está, caso contrário, exiba uma mensagem.*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#define tam 50

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[tam],find,flag=0,pega;
	int i;
	
	//Gerar numeros aleatorios de 0 a 100
	for(i=0;i<tam;i++){
		vet[i]= rand() % 100;
		fflush(stdin);
	}
	
	//Digitar o numero
	printf("Digite um numero para ver se ele existe no vetor [0-100]: ");
	scanf("%d",&find);
	
	//Procurar nos vetores se existe
	for(i=0;i<tam;i++){
		if(vet[i]==find){
			flag=1;
			pega=i;
		}
	}
	
	//Resposta
	if(flag==1){
		printf("O número existe no vetor! =D\nNUMERO: %d \nPOSIÇÃO: %d",find,pega);
	} else{
		printf("O número não existe no vetor... =(");
	}

	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
