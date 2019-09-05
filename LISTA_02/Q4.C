#include <stdio.h>
#include <locale.h>

void triang(int a,int b,int c);

int main(){

	setlocale(LC_ALL,"Portuguese");	
	int a,b,c;
	
	printf("Entre com o lado A: ");
	scanf("%d",&a);
	printf("Entre com o lado B: ");
	scanf("%d",&b);
	printf("Entre com o lado C: ");
	scanf("%d",&c);
	fflush(stdin);
	triang(a,b,c);
	
	
	return 0;
}

void triang(int a,int b, int c){
	
	if(a==b && a!=c)
		printf("\n… um Tri‚ngulo ret‚ngulo");
	else
		printf("\nN„o È um Tri‚ngulo ret‚ngulo");
		
}
