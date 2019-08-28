/*3- Carregue um vetor de 50 elementos inteiros e n�o ordenados. Leia um determinado n�mero e pesquise se o mesmo existe no
VETOR. Caso exista, imprimir seu valor e em que posi��o ele est�, caso contr�rio, exiba uma mensagem.*/
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
		printf("O n�mero existe no vetor! =D\nNUMERO: %d \nPOSI��O: %d",find,pega);
	} else{
		printf("O n�mero n�o existe no vetor... =(");
	}

	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[� 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
