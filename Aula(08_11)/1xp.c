#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	int rg;
	int telefone;
}Tcliente;

int main(){

	//fread(buffer, tamanhoembytes, quantidade, ponteirodeqruivo);
	//fwrite(buffer, tamanhoembytes, quantidade, ponteirodeqruivo);
	//retorno = fread(&Vcli, sizeof(strcut Tcliente), 1, cliente);
	//while(!feof(cliente));
	//seek(<referencia_ao_arquivo>,<bytes>,<modo>);
	//fseek(arquivo_de_cliente, 4 * sizeof(Cliente),SEEK_SET);
	//SEEK_SER - Parte do incio do arquivo e avança
	//SEEK_END - Parte do final do arquivo e retrocede
	//SEEK_CUR - Parte do local atual e avança
	
	Tcliente vcli,
	
	FILE * fp = fopen ("file.bin","wb");
	if(fp == NULL){
		printf("Arquivo não encontrado!");
		exit(1);
	} else {
		
		fwrite(&buffer,sizeof(), 1, fp);
		
		printf("Digite seu nome: ");
		scanf("%s", nome);
		printf("Digite seu cpf: ");
		scanf("%d",&cpf);
	
		
	}
	
	
	
	
	return 0;
}
