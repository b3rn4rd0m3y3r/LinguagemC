#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

char** OBJFILE[100] = {};

void right(char *texto, int tam, char buffRes[]){
	int i, size;
	for(i=0;i<=tam;i++) buffRes[i] = '\0';
	size = strlen(texto);
	buffRes[tam-1] = texto[size-1];
	for(i=tam-2;i>=0;i--){
		buffRes[i] = texto[size+(i-tam)];
		}	
	}

/* Execute este programa usando o pausador do console ou loop de input */

int main(int argc, char** argv) {
	char bufRes[5];
	int lineTokCnt = 0;
	// No C++ pode-se imprimir os itens de argv sem
	// ter que utilizar snprintf com char*
	// 1 - Busca o nome do fonte (deve ter extensão)
	right(argv[1],3,bufRes);
	printf("P001 - Fonte: %s %s\n",argv[1],bufRes);	
	// 1.1 - Testa se existe extensão e se é ".bas"
	if( strcmp("bas",bufRes) == -1 ){
		exit(EXIT_FAILURE);		
		} else {
		printf("P002 - Fonte valido. Processamento autorizado.\n");
		}
	// 2 - Abertura e Leitura do fonte, linha a linha
	// 2.1 - Abertura
   	ifstream input(argv[1]);
  	// 2.2 - Leitura
	for( string a; getline( input, a ); ){
		//cout<<a<<endl;
		char *cstr = &a[0];
		//printf("%s %d\n",cstr,strlen(cstr));
		OBJFILE[lineTokCnt] = &cstr;
		lineTokCnt++;
		}
	for(int i=0;i<lineTokCnt;i++){
		printf("%d %s\n",i,OBJFILE[i]);
		}
	return 0;
}