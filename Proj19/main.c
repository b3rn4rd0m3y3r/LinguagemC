#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	struct pessoa {
		char nome[40];
		char sexo[1];
		int anonasc; 
		};
	struct pessoa Pessoas[20];
	char S[20] = "Ambrosio";
	char M[2] = "M";
	strcpy(Pessoas[0].nome,S);
	strcpy(Pessoas[0].sexo,M);
	
	strcpy(S,"Antonio");
	strcpy(Pessoas[1].nome,S);
	strcpy(Pessoas[1].sexo,M);
	strcpy(S,"Bras");
	strcpy(Pessoas[2].nome,S);
	strcpy(Pessoas[2].sexo,M);
	strcpy(S,"Zico");
	strcpy(Pessoas[3].nome,S);
	strcpy(Pessoas[3].sexo,M);
	
	for(i=0;i<4;i++){
		printf("%s %s\n",Pessoas[i].nome,Pessoas[i].sexo);
		}
	
	return 0;
}