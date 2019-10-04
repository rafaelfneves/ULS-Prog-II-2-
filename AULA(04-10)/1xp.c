#include <stdio.h>
#include <stdlib.h>


int main(){
	int i;
	int notas;
	int tam;
	int soma;
	
	printf("Quantidade de notas: ");
	scanf("%d", &tam);
	notas = (int *) malloc(tam * sizeof(int)+1);
	for(i=0;i<tam;i++)
	{
		printf("\nDigite a nota #%d: ",i+1);
		scanf("%d", &notas);
		soma += notas;	
	}
	
	int media = soma/tam;
	printf("****MEDIA****\n%d", media);
	
	free(notas);
	free(tam);
	
	return 0;
}

	/*ptr = (int *)malloc(sizeof(int));
	ptr = NULL;
	exemplo = (float *)malloc(tam * sizeof(float));
	free(exemplo); */
