/*6- Escreva um programa que leia uma string - 80 caracteres - e imprima o total de pares de consoantes dobradas (rr e ss).*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char string[80];
	int i,flag=0,tam;
	
	printf("Digite a frase: ");
	gets(string);
	fflush(stdin);
	
	//Pega tamanho da string
	tam=strlen(string);

	for(i=0;i<tam;i++){
		if(string[i] == string[i+1]){
			flag++;
		}
	}
	
	printf("\nTotal de consoantes dobradas: %d",flag);

	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
