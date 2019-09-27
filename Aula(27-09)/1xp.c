#include <stdio.h>
#include <locale.h>

int func(int a,int b);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num,exp;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	printf("Digite o expoente: ");
	scanf("%d",&exp);
	
	int resp=func(num,exp);
	
	printf("A potencia é de: %d",resp);
	
	return 0;
}

int func(int a, int b){
	
	int i,pot=a;
	for(i=0;i<b-1;i++){	
		pot = pot * a;	
	}
	
	return pot;
}
