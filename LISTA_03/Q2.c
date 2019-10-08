#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int func(int a,int b){
	int i,pot=a;
	
	for(i=1;i<b;i++)
	{
		pot = pot * a;
	}
	
	return pot;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int base,exp;
	
	printf("Digite a base: ");
	scanf("%d",&base);
	printf("Digite o expoente: ");
	scanf("%d",&exp);

	int resultado = func(base,exp);
	printf("Resultado: %d",resultado);

	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
