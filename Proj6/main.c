#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define stringize(name) #name
#define PI 3.1416
#define string(A,tam) char A[tam] = "xxxxxxxxxxxx"
#define SINGLEQUOTE "'"
#define defstring(A,tam,B)({ string(A,tam); printf("%s %s\n",A,#B); strcpy(A,stringize(B)); printf("%s x %s\n",A,#B);})

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Declarações
	int banana; 
	char status;
	char nome[50];
	string(nome1,50);
	defstring(nome2,50,Bernardo);
	float coeficiente; 
	// Atribuições
	banana = 3; 
	status = 'A'; 
	coeficiente = 0.653;
	// Entrada de dados
	printf("Nome: ");
	banana = scanf("%s",nome1);
	// Saída
	printf("Seu Nome eh %s %f\n", nome1, PI);
	
	return 0;
}