#include <stdio.h>
//#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *nome[50];
	int c;
	printf("%s","Seu nome: ");
	fflush(stdout);
	c = scanf("%s",nome);
	printf("Muito prazer %s %d %d", nome,*nome,&nome);
	fflush(stdout);
	return 0;
}