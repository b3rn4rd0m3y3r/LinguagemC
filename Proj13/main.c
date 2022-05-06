#include <stdio.h>
#include <stdlib.h>
#define boolean(A) int A
#define false 0
#define true 1

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

FILE *criaTabela(){
	FILE *fp = fopen("tabela.csv","w");
	fprintf(fp,"%s;%s\n","Telefone","Nome");
	fclose(fp);
	
	printf("%s\n","Tabela criada");
	return fp;
	}

void addRegistro(){
	int temp0;
	char *temp1[60];
	// Formulario - INICIO
	printf("%s","Telefone (so numeros): ");
	scanf("%d",&temp0);
	printf("%s\n","");
	printf("%s","Nome: ");
	scanf("%s",&temp1);
	printf("%s\n","");
	// Formulario - FIM
	// Gravação - INICIO
	FILE *fp = fopen("tabela.csv","a");
	fprintf(fp,"%d;%s\n",temp0,temp1);
	fclose(fp);
	// Gravação - FIM	
	printf("Registro %d criado\n",temp0);
	}

void listRegistros(){
	char *registro;
	// Abre arquivo
	FILE *fp = fopen("tabela.csv","r");
	while( EOF != fscanf(fp, "%[^\n]\n", registro) ){
		printf("%s\n",registro);
		}
	
	// Fecha arquivo
	fclose(fp);	
	}

int main(int argc, char *argv[]) {
	FILE *fptr;
	int opcao;
	boolean(sair);
	boolean(tabCriada);
	opcao = 0;
	sair = false;
	tabCriada = false;
	while( !sair ){
		printf("%s\n","CONTROLE DE REGISTROS");
		printf("%s\n","1 - Cria a Tabela");
		printf("%s\n","2 - Acrescenta um registro");
		printf("%s\n","3 - Lista os registros");
		printf("%s\n","4 - SAIR");
		while( opcao != 4 ){
			printf("Opcao: ");
			scanf("%i",&opcao);
			switch (opcao){
				case 1:
					printf("Opcao 1\n");
					fptr = criaTabela();
					tabCriada = true;
					break;
				case 2:
					printf("Opcao 2\n");
					addRegistro();
					break;
				case 3:
					printf("Opcao 3\n");
					listRegistros();
					break;
				case 4:
					sair = true;
					printf("%i",tabCriada);
					break;
				}
			}
		}
	return 0;
	}