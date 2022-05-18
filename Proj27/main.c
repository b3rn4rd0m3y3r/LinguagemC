#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int right(char *texto, int tam, char buff2[]){
	int i,size;
	for(i=0;i<=tam;i++) buff2[i]='\0';
	i = 0;
	size = strlen(texto);
	printf("Size: %i\n",size);
	//endereco3 += size-1;
	buff2[tam-1] = texto[size-1];
	printf("Buff2: %c",(buff2[tam-1]));
	for(i=tam-2;i>=0;i--){
		buff2[i] = texto[size+(i-tam)];
		printf("%c",(buff2[i]));
		}
	return buff2;
	}

int left(char *texto, int tam, char buff[]){	
	//char buff[100];
	int i=0;
	printf("from left: %s\n",texto);
	// Limpando buff
	for(i=0;i<=tam+1;i++) buff[i]='\0';
	snprintf(buff,tam,"%s",texto);
	/*
	i = 0;
	buff[i++] = texto[i];
	for(i=1;i<tam;i++){
		buff[i] = texto[i];
		}	
	*/
	printf("buff f left: %s\n",texto);
	return buff;
	}	

int main(int argc, char *argv[]) {
	// Inicialização dos tipos
	char buff[100];
	char buff2[100];
	char buff3[100];
	int c;
	int ch;
	int i;
	//int ptEnder;
	int size;
	int tam;
	
	// <<<<<<<<<<<<<<<<< Manipulando as variaveis endereço >>>>>>>>>>>>>>>>>>
	char endereco2[50] = "Rua Tal 78";
	//ptEnder = &endereco2;
	size = strlen(endereco2);
	printf("Size: %i\n",size);
	// <<<<<<<<<<<<<<<<< LEFT >>>>>>>>>>>>>>>>>>
	// Parâmetro para Left
	tam = 7;
	
	//snprintf(buff,tam+1,"%s",left(&endereco2, tam));
	printf("buff zero: %s\n", buff );
	
	left(endereco2, tam, buff);
	
	printf("Texto pos left: %s\n",buff);
	printf("LEFT\n");
	printf("buff: %s\n", buff );
	printf("Size: %i\n",strlen(buff));
	
	// <<<<<<<<<<<<<<<<< RIGHT >>>>>>>>>>>>>>>>>>
	// Parâmetros para Right
	tam = 6;
	char endereco3[50] = "Rua Baldim 78";
	// Limpando buff2

	right(endereco3, tam, buff2);

	printf("\nRIGHT\n");
	printf("buff: %s\n", buff2 );
	printf("Size: %i\n",strlen(buff2));
	
	// <<<<<<<<<<<<<<<<< SUBSTRING >>>>>>>>>>>>>>>>>>
	// Parâmetros para Substring
	
	int esq;
	tam = 7;
	esq = 4;
	
	char endereco4[50] = "Rua Baldarachi 32";
	// Limpando buff3
	for(i=0;i<=tam+1;i++) buff3[i]='\0';
	//buff[i++] = endereco4[i];
	for(i=esq;i<tam+esq;i++){
		buff3[i-esq] = endereco4[i];
		printf("%c",buff3[i]);
		}	
	printf("\nSUBSTR\n");
	printf("buff: %s\n", buff3 );
	printf("Size: %i\n",strlen(buff3));	
	
	return 0;
}