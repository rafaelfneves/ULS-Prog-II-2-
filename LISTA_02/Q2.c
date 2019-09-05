#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int seg,min=0,hr=0,cont=0;
	
	printf("Informe os segundos: ");
	scanf("%d",&seg);
	
	do{
		
		if(seg>59){
		seg -= 60;
		min++;
		if(min>59){
			min -=60;
			hr++;
		}
		
	} 
	}while(seg>59);
	
	
	printf("\nSegundos: %d\nMinutos: %d\nHoras: %d",seg,min,hr);
	
	return 0;
}
