#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *S[50];
	char *ptr;
	char *nome[40];
	char *nomep;
	// Pointer ou "handle" para o arquivo
	FILE *fptr, *fhtml;
	// Abre arquivo para leitura "r" ou gravação "w"
	// _____________________________
	// | a | r | q | . | c | s | v |
	// ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨
	//argv[1], argv[1]++, 
	//

	char *c;
	c = 32;
	int i = 0;
	while( c != 0 && i < 50 ){
		c = *argv[1]++; //(incrementa argv[1] de uma unidade)
		printf("%c",c);
		fflush(stdout);
		nome[i] = (char) c;
		}
	//nome[i] = 0;
	memcpy(nome, nomep, sizeof(nome));
	printf("Nome: %s \n",nomep);

	return 0;
}