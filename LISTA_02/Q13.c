#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int qtd=0;
	int voo[36][lugar];
	int lugar[165][2];
	int opc=99, cont=0, z=0;
	
	do{
		printf("0-Sair");
		printf("\n1-Registrar Voo");
		printf("\n2-Registrar Pessoas");
		printf("\n\nDigite sua Opcao: ");
		scanf("%d",&opc);
		system("cls");
			
		if(opc==1){
			if(qtd<=36){
				system("cls"); 
				printf("Digite o número do voo a ser registrado: ");
				scanf("%d",&voo[z]);
				z++;
				} else{
				printf("Já possui 37 voos registrados, não é possivel registrar um novo.");
			} 
		}else if(opc==2){
			system("cls");
			printf("||===REGISTRAR_PESSOA===||");
			printf("Qual o cpf:");
			scanf("%d",&cont);
				if(cont == )
				if(lugar != NULL){
					
				} else{
					printf("Não há lugares disponíveis.");
				}
			
			
		} else if(opc==0){
			system("cls");
			printf("Saindo do programa...");
			return 0;
		} else {
			printf("Comando Inválido.\n");
			system("pause");
			system("cls");
		}
	}while(opc!=0);
	
	return 0;
}
