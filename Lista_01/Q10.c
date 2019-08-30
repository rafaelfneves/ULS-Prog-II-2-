/*10- Escreva um programa que recebe uma palavra de até 50 caracteres e exibe quantas letras diferentes ela contém*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char string[50],arm[50];
	int i,j,tam,cont=0;
	
	printf("Digite a palavra: ");
	gets(string);
	fflush(stdin);
	tam=strlen(string);
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(string[i] == string[j]){
				arm[i] = string[i];
				cont++;
			}
		}		
	}
	
	printf("\nLetras diferentes: %d",cont);
	
	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}

