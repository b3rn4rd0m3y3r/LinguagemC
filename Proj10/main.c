#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void parseLinha(char *S,FILE *fhtml,char *TIPO){
	char *ptr1 = strtok(S, ";");
	while (ptr1 != NULL){
		printf("%s ", ptr1);
		if( TIPO == "Tit"){
			fprintf(fhtml,"%s%s%s","<th>", ptr1, "</th>");
			} else {
			fprintf(fhtml,"%s%s%s","<td>", ptr1, "</td>");
			}
		ptr1 = strtok(NULL, ";");
		}	
	}

int main(int argc, char *argv[]) {
	char *S[50];
	char *ptr;
	char *ptra[40];
	char *nome[40];
	//char *htmlNome[140];
	char htmlNome[140];
	const char *nomep;
	// Pointer ou "handle" para o arquivo
	FILE *fptr, *fhtml;
	// Abre arquivo para leitura "r" ou gravação "w"
	// Pega o parâmetro 1 do executável ou o arquivo clicado
	//nome = strdup(argv[1]);
	
	char *c;
	char *dummy[400];
	c = 32;
	int i = 0;
	while( c != 0 && i < 50 ){
		c = *argv[1]++; //(incrementa argv[1] de uma unidade)
		i++;
		printf("%c",c);
		fflush(stdout);
		nome[i] = (char) c;
		}
	//nome[i] = '\0';
	memcpy(nome, nomep, sizeof(nome));
	//snprintf(nome, sizeof(nome), "%s", nomep);
	printf("Nome: %s \n",nome);
	
  	//free(nome); 
	//nome = NULL;
	
	ptr = strtok(nomep, ".");
	//ptr = strtok(NULL, ".");
	printf("PTR: %s \n",ptr);
	
	// Abre o CSV para leitura
	if( ( fptr = fopen(nome,"r") )   ){
		printf("%s\n","Abriu");
		} else {
		printf("%s\n","Nao Abriu");
		};
	// HTML file to write
	snprintf(htmlNome, sizeof(htmlNome), "%s%s", ptr,".html");
	printf("Nome HTML: %s \n",htmlNome);
	/*
	// Copia ptr para nome (nome age como temporário)
	strcpy(nome,nomep);
	printf("Nome2: %s \n",nome);
	strcat(nome,".html");
	printf("Nome3: %s \n",nome);
	*/
	
	// Abre arquivo para gravação "w" do HTML
	fhtml = fopen(htmlNome,"w");
	
	// Inicia a tabela HTML
	fprintf(fhtml,"%s\n","<table border=1>");
	
	// Lê a primeira linha com fscanf
	fscanf(fptr, "%[^\n]\n", S);
	// Obtém um iterador para os campos separados por ";"
	parseLinha(S,fhtml,"Tit");
	
	// fim Iterador
	fflush(fhtml);
	printf("%s\n", "");
	fprintf(fhtml,"%s\n","");
	fflush(stdout);	
	
	// Lê as linhas com fscanf
	while (EOF != fscanf(fptr, "%[^\n]\n", S)){
		//fflush(stdout);
		fprintf(fhtml,"%s","<tr>");
		// Obtém um iterador para os campos separados por ";"
		parseLinha(S,fhtml,"Reg");
		// FIM iterador
		printf("%s\n", "");
		fflush(stdout);
		fprintf(fhtml,"%s\n","</tr>");
		fflush(fhtml);
		}
	
	fprintf(fhtml,"%s\n","</table>");
	//fflush(fhtml);
	
	fclose(fhtml);
	fclose(fptr);
	snprintf(ptra, sizeof(ptra), "%s", ptr);
	//snprintf(htmlNome, sizeof(htmlNome), "%s %s%s", "start msedge.exe " , ptra,".html");
	//snprintf(htmlNome, sizeof(htmlNome), "%s%s%s", "\"C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\msedge.exe\" ", ptra,".html" );
	snprintf(htmlNome, sizeof(htmlNome), "%s%s", ptra,".html" );
	printf("%s\n", htmlNome);
	//ShellExecute(NULL, "open", htmlNome, NULL, NULL, NULL);
	system(htmlNome);
	//ShellExecute(NULL, "open", "Arq_bald.html", NULL, NULL, SW_SHOWNORMAL);
	return 0;
}