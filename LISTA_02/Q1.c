#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int n1,n2,soma=0,i,maior,menor;
	
	printf("Digite n1: ");
	scanf("%d",&n1);
	printf("Digite n2: ");
	scanf("%d",&n2);
	
	//Verifica Maior e Menor
	if(n1>n2){
		maior = n1;
		menor = n2;
	} else if(n2>n1){
		maior = n2;
		menor = n1;
	}
	
	//Repetição de soma
	for(i=menor;i<maior;i++){
		maior--;
		soma +=maior;
	}
	
	//Print na tela
	printf("\nSoma dos inteiros entre num1 e num2: %d",soma);
	
	return 0;
}
