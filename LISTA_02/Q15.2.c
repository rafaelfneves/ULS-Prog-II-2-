/*15. Escreva uma função divisão, que retorne a divisão inteira de
dividendo por divisor e armazena no parâmetro resto, passado por
referência o resto da divisão. Construa um programa utilizando esta
função.*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
int func(int a,int b,int *resto);

int main(){	
	setlocale(LC_ALL,"Portuguese");
	//Variaveis
	int dend,sor, r;
	
	//Entrada
	printf("Dividendo: ");
	scanf("%f",&dend);
	printf("Divisor: ");
	scanf("%f",&sor);
	
	//Chama função
	int resp = func(dend,sor,&r);
	printf("\nResto: %d",resp);

	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}

int func(int a,int b, int *resto){
	*resto = a % b;
	
	return a/b;
}
