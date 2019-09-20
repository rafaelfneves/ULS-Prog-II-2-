#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void lervetor(int *vet,int tam);
int localiza(int *vet, int elem, int tam);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i;
	int vet[10],elem,tam=10;
	
	/*for(i=0;i<100;i++){
		vet[i]=rand() % 100;
		//printf("%d|",vet[i]);
	}*/
	
	lervetor(vet,10);
	int pos=localiza(vet,5,10);
	
	if(pos != -1){
		printf("O elemento está na %d posição...",pos+1);
	} else{
		printf("O elemento não está em nenhuma posição");
	}
	
	return 0;
}

void lervetor(int * vet, int tam){
	int i;
	
	for(i=0;i<tam;i++){
		printf("Informe o %d° elemento: ",i+1);
		scanf("%d",&vet[i]);
	}
}

int localiza(int *vet, int elem, int tam){
	int i;
	for(i=0;i<tam;i++)
		if(vet[i]==elem)
			return i;
			
	return -1;
}

