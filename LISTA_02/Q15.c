#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func(int *a,int *b);

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int divisor,dividendo,result,a,b;
	
	printf("Digite o Divisor: ");
	scanf("%d",&divisor);
	printf("Digite o Dividendo: ");
	scanf("%d",&dividendo);
	
	result = func(&divisor, &dividendo);

	printf("\nResto da divisão: %d",result);
	return 0;
}

int func(int *a,int *b){
	
	int resto = *a % *b;
	return resto;
}

