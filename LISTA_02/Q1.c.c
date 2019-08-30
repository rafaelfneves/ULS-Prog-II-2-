#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaNum(int a,int b);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a,b;
	
	printf("Digite o valor de A: ");
	scanf("%d",&a);
	printf("Digite o valor de B: ");
	scanf("%d",&b);
	
	printf("A soma dos números entre eles é: %d",somaNum(a,b));
	
	
	return 0;
}

int somaNum(int a,int b){
	
	int soma=0;
	int i;
	
	if(a<b)
		for(i=a+1;i<b;i++){
			soma +=i;
		}
	return soma;
}
