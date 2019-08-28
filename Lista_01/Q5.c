/*5- Carregar o resultado dos jogos da loteria esportiva em um vetor RESUL [13], que estará preenchido com os valores 1 (coluna 1),
2 (coluna 2) e 0 (coluna do meio). O seu programa deverá totalizar os pontos de cada apostador. Para isto, leia o número do
cartão (flag: 0) e um vetor APOSTA [13]. Ao final, exiba o no
do cartão, o total de pontos e, para o caso de 13 acertos, exibir
mensagem.*/
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int resp[13]={1,4,3,2,4,3,1,2,3,2,4,3,4};
	int pessoa[13],pontos;
	int i,cartao=0;

	fflush(stdin);
	cartao++;
	//PEGAR RESPOSTAS
	printf("|===RESPOSTAS[1-4]===|\n");
	for(i=0;i<13;i++){
		printf("QUESTAO %d: ",i+1);
		scanf("%d",&pessoa[i]);
		fflush(stdin);
		//Pegar pontos
		if(resp[i] == pessoa[i])
			pontos++;
	}
	
	//GABARITO
	printf("\nCARTÃO: %d",cartao);
	printf("\nACERTOS: %d\n",pontos);
	if(pontos == 13)
		printf("ACERTOU TODAS, PARABÉNS!!!!");
		
	printf("\n\n\n");
	printf("\n|===============================================================================|");
	printf("\n|    --[© 2019 Rafael Neves All Rights Reserved (github.com/rafaelfneves)]--    |");
	printf("\n|===============================================================================|\n");
	return 0;	
}
