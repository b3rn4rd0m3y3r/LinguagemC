#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *lst[2];
	char S[50];
	char titulo[50];
	char auth[50];
	char stybas[2];
	char jsinit[2];
	// Mapa de caracteres
	//for(int x = 0; x <= 255; x++){
    //    printf("[%d]: %c\n", x, x);
    //	}
    
	lst[0] = "Ex1.html";
	//setlocale(LC_ALL,"Portuguese_Brazil.ISO-8859-1");
	setlocale(LC_ALL,"Portuguese_Brazil.ISO-8859-1");
	// Entrada de parâmetros
	printf("GERA%c%cO DE TEMPLATE HTML COMPLETA\n\n",128,199);
	printf("Nome do arquivo: ");
	gets(S);
	printf("Titulo: ");
	gets(titulo);
	printf("Autor: ");
	gets(auth);
	printf("Estilos b%csicos: ",160);
	gets(stybas);
	printf("Javascript de inicializa%c%co: ", 135, 198);
	gets(jsinit);
	// Fim parâmetros de entrada
	FILE *fp = fopen(S,"w");
	fprintf(fp,"%s\n","<html>");
	fprintf(fp,"%s\n","\t<head>");
	fprintf(fp,"%s%s%s\n","\t\t<title>",titulo,"</title>");
	fprintf(fp,"%s\n","\t\t<style>");
	if( strcmp(stybas,"s") == 0 || strcmp(stybas,"S") == 0 ){
		fprintf(fp,"%s\n","\t\t\tBODY{");
		fprintf(fp,"%s\n","\t\t\t\tfont-family: Arial; font-size: 12px; color: dimgray;");
		fprintf(fp,"%s\n","\t\t\t\t}");
		}
	fprintf(fp,"%s\n","\t\t</style>");
	fprintf(fp,"%s%s%s\n","\t\t<meta name=\"author\" content=\"",auth,"\">");
	fprintf(fp,"%s\n","\t\t<meta http-equiv=\"Content-Type\" content=\"text/html;charset=iso-8859-1\">");
	fprintf(fp,"%s\n","\t\t<meta name=\"description\" content=\"HTML5\">");
	if( strcmp(jsinit,"s") == 0 || strcmp(jsinit,"S") == 0 ){
		fprintf(fp,"%s\n","\t\t<script>");
		fprintf(fp,"%s\n","\t\t\tfunction init(){");
		fprintf(fp,"%s\n","\t\t\t\t}");
		fprintf(fp,"%s\n","\t\t</script>");
		}
	fprintf(fp,"%s\n","\t</head>");
	fprintf(fp,"%s","\t<body id=\"corpo\"");
	if( strcmp(jsinit,"s") == 0 || strcmp(jsinit,"S") == 0 ){
		fprintf(fp,"%s"," onload=\"init();\"");
		}
	fprintf(fp,"%s\n",">");
	fprintf(fp,"%s\n","Preencha este corpo do HTML.");
	fprintf(fp,"%s\n","\t</body>");
	fprintf(fp,"%s\n","</html>");
	fclose(fp);
	system(S);
	return 0;
	}