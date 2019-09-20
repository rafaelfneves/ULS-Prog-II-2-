#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void minMax(int *a,int tam,int *min,int *max){
	int i;
	
	*min=a[0]; *max=a[0];
	for(i=0;i<tam;i++){
		if(a[i]>*max)
			*max = a[i];
		if(a[i]<*min)
			*min = a[i];
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int tam;
	
	printf("");
	
}
