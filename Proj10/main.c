#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void parseLinha(char *S,FILE *fhtml,char *TIPO){
	char *ptr = strtok(S, ";");
	while (ptr != NULL){
		printf("%s ", ptr);
		if( TIPO == "Tit"){
			fprintf(fhtml,"%s%s%s","<th>", ptr, "</th>");
			} else {
			fprintf(fhtml,"%s%s%s","<td>", ptr, "</td>");
			}
		ptr = strtok(NULL, ";");
		}	
	}

int main(int argc, char *argv[]) {
	char *S[50];
	//char *ptr;
	// Pointer ou "handle" para o arquivo
	FILE *fptr, *fhtml;
	// Abre arquivo para leitura "r" ou gravação "w"
	// Pega o parâmetro 1 do executável ou o arquivo clicado
	fptr = fopen(argv[1],"r");
	// Abre arquivo para gravação "w" do HTML
	fhtml = fopen("arq.html","w");
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
	
	ShellExecute(NULL, "open", "arq.html", NULL, NULL, SW_SHOWNORMAL);
	return 0;
}