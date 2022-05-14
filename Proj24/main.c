#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Inicialização dos tipos
	char buff[100];
	char buff2[100];
	int c;
	int ch;
	int i;
	int ptEnder;
	int size;
	int tam;
	
	// <<<<<<<<<<<<<<<<< Manipulando as variaveis endereço >>>>>>>>>>>>>>>>>>
	char *endereco2 = strdup("Rua Tal 78");
	ptEnder = &endereco2;
	size = strlen(endereco2);
	printf("Size: %i\n",size);
	// <<<<<<<<<<<<<<<<< LEFT >>>>>>>>>>>>>>>>>>
	// Parâmetro para Left
	tam = 7;
	// Limpando buff
	for(i=0;i<=tam;i++) buff[i]='\0';
	i = 0;
	buff[i++] = *endereco2;
	for(i=1;i<tam;i++){
		buff[i] = *(++endereco2);
		}
	printf("LEFT\n");
	printf("buff: %s\n", buff );
	printf("Size: %i\n",strlen(buff));
	
	// <<<<<<<<<<<<<<<<< RIGHT >>>>>>>>>>>>>>>>>>
	// Parâmetros para Right
	tam = 6;
	char *endereco3 = strdup("Rua Baldim 78");
	// Limpando buff2
	for(i=0;i<=tam;i++) buff2[i]='\0';
	i = 0;
	size = strlen(endereco3);
	printf("Size: %i\n",size);
	endereco3 += size-1;
	buff2[tam-1] = *endereco3;
	printf("Buff2: %c",(buff2[tam-1]));
	for(i=tam-2;i>=0;i--){
		buff2[i] = *(--endereco3);
		printf("%c",(buff2[i]));
		}
	printf("\nRIGHT\n");
	printf("buff: %s\n", buff2 );
	printf("Size: %i\n",strlen(buff2));
	return 0;
}