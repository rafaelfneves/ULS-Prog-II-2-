/*9- Escreva um programa em C que receba um texto, na string ENT, e devolva, em SAI, este mesmo texto tendo sido eliminado
todos os espa�os brancos. Exiba o tamanho das strings ENT e SAI (sem utilizar a fun��o strlen).*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,j=0,tam;
	
	//Entrada
	char string[100];
	printf("Digite a frase: ");
	gets(string);
	fflush(stdin);
	
	//Tamanho
	tam=strlen(string);
	
	//La�o
	for(i=0;i<tam;i++){
		//Verifica espa�o
		if(string[i] == ' '){
			string[i]=string[i+1];
			//Troca vetores
			for(j=i;j<tam;j++){
				string[j]=string[j+1];
			}		
		}
	}
	
	//Saida
	printf("\n%s",string);
	
	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[� 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
