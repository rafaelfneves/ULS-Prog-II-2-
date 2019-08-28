/*7- Escreva um pequeno programa que lê do teclado uma string e imprimir quantos caracteres dessa string são dígitos. Por
exemplo:
ENTRADA: "Niterói, 06 de março de 2004" EXIBIR: A frase "Niterói, 06 de março de 2004" tem 6 dígitos*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char string[80];
	int i,j,flag=0,tam;
	char num[10]={'0','1','2','3','4','5','6','7','8','9'};
	
	printf("Digite a frase: ");
	gets(string);
	fflush(stdin);
	
	//Pega tamanho da string
	tam=strlen(string);

	/*for(i=0;i<tam;i++){
		if(string[i] == '0' ||string[i] == '1' || string[i] == '2' || string[i] == '3' || string[i] == '4' || string[i] ==  '5' || string[i] == '6' || string[i] == '7' || string[i] == '8' || string[i] == '9')
			flag++;
	}*/
	
	//Flag - Jeito mais fácil
	for(i=0;i<tam;i++){
		for(j=0;j<10;j++){
			if(string[i] == num[j]){
				flag++;
			}
		}
	}
	
	printf("\nTotal de Digitos: %d",flag);

	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
