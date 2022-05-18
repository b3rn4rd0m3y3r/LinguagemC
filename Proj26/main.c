#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Strfunc.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Inicialização dos tipos
	char buff[100];
	char buff2[100];
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
	
	printf("buff antes do left: %s\n", buff );
	
	left(endereco2, tam, buff);
	
	printf("Texto pos left: %s\n",buff);
	printf("LEFT\n");
	printf("buff: %s\n", buff );
	printf("Size: %i\n",strlen(buff));
	
	// <<<<<<<<<<<<<<<<< RIGHT >>>>>>>>>>>>>>>>>>
	// Parâmetros para Right
	tam = 6;
	char endereco3[50] = "Rua Baldim 78";
	
	right(endereco3,tam,buff2);

	printf("\nRIGHT\n");
	printf("buff: %s\n", buff2 );
	printf("Size: %i\n",strlen(buff2));
	return 0;
}