
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para deixar em pt/br
typedef struct{
	int tipos[37][3];
	int qtd=0;
}voo;

int comprar();
int aeronaves();
int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc=0;
	voos avioes;
	
	do{
		printf("Digite a baixo o numero da opção desejada:/n 1 - Registrar voo \n 2 - Registar passageiro \n 3 - Sair");
		scanf("%d",&opc);
		system("cls");
		
		if(opc==1){
			if(avioes.qtd<37){
				system("cls");
				aeronaves();
			}
			else{
				printf("Já possui 37 voos registrados, não é possivel registrar um novo.");
			}
		}
		if(opc==2){
			if(avioes.qtd!=0){
				system("cls");
				comprar();
			}
		}
		if(opc==3){
			return 0;
		}
		else{
			printf("Comando não reconhecido.");
		}
	}while(opc!=3);
	return 0;
}
int aeronaves(){
	voo avioes;
	printf("Digite o numero do voo:");
	scanf("%d",&avioes.tipo[avioes.qtd][1]);
	printf("Digite a quantidade de lugares:");
	scanf("%d",&avioes.tipo[avioes.qtd][2]);
	avioes.tipo[avioes.qtd][3]=0;
	avioes.qtd++;
	return 0;
}
int comprar(){
	int fly, ok=0, i=0, registrado, j=0;
	char cpf[11];
	voo avioes;
	do{
		printf("Digite o numero do voo:");
		scanf("%d",&fly);
		for(i=0;i<37;i++){// for para ver se o voo existe
			if(avioes.tipos[i][1]==fly){
				ok+1;
				registrado=i;
				if(avioes.tipos[i][2]<avioes.tipos[i][3]){
					avioes.tipos[i][3]++;
					printf("Digite o CPF do passageiro, sem ponto e sem simbolos:");
					scanf("%c",&cpf);
					printf("Passageiro registrado com sucesso.");
				}
				else{printf(" Este voo está cheio.")
				}
			}
		}
	}
	}while(ok<1);
	system("cls");
	return 0;
}
