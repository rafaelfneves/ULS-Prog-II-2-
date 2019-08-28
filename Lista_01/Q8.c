/*8- Carregar uma frase de até 1000 caracteres e trocar todas as possíveis ocorrências da letra n antes das letras p ou b pela letra m.*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char frase[1000];
	int i,tam;

	//Digita String
	printf("Digite sua frase: ");
	gets(frase);
	fflush(stdin);
	//Pega Tamanho da string
	tam=strlen(frase);
	
	for(i=0;i<tam;i++){
		if(frase[i] == 'n' && frase[i+1] == 'p' || frase[i+1] == 'b'){
			frase[i]='m';
			fflush(stdin);
		}
	}
	
	printf("\n%s",frase);
	
	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
