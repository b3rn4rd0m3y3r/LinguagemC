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
	char conn[50];
	// Mapa de caracteres
	//for(int x = 0; x <= 255; x++){
    //    printf("[%d]: %c\n", x, x);
    //	}
    
	lst[0] = "Ex1.html";
	//setlocale(LC_ALL,"Portuguese_Brazil.ISO-8859-1");
	setlocale(LC_ALL,"Portuguese_Brazil.ISO-8859-1");
	// Entrada de parâmetros
	printf("GERA%c%cO DE TEMPLATE PHP DE CONEXÃO COM SQLITE\n\n",128,199);
	printf("Nome do arquivo: ");
	gets(S);
	printf("Titulo: ");
	gets(titulo);
	printf("Autor: ");
	gets(auth);
	printf("String de conexão ao banco: ");
	gets(conn);
	// Fim parâmetros de entrada
	FILE *fp = fopen(S,"w");
	fprintf(fp,"%s\n","<html>");
	fprintf(fp,"%s\n","\t<head>");
	fprintf(fp,"%s%s%s\n","\t\t<title>",titulo,"</title>");
	fprintf(fp,"%s%s%s\n","\t\t<meta name=\"author\" content=\"",auth,"\">");
	fprintf(fp,"%s\n","\t\t<meta http-equiv=\"Content-Type\" content=\"text/html;charset=iso-8859-1\">");
	fprintf(fp,"%s\n","\t\t<meta name=\"description\" content=\"HTML5\">");
	fprintf(fp,"%s\n","\t</head>");
	fprintf(fp,"%s\n","\t<?php");
	fprintf(fp,"%s\n","\t\ttry {"); // Abre try
	fprintf(fp,"\t\t\t$conn = new PDO('sqlite:%s');\n", conn );
	fprintf(fp,"\t\t\t$conn->setAttribute(PDO::ATTR_ERRMODE, $conn::ERRMODE_EXCEPTION);\n", "" );
	fprintf(fp,"%s\n","\t\t\t} catch(PDOException $e) {", "");
	fprintf(fp,"\t\t\t\techo $e->getMessage();\n","");
	fprintf(fp,"%s\n","\t\t\t}"); // Fecha try
	fprintf(fp,"%s\n","\t?>");
	fprintf(fp,"%s\n","</html>");
	fclose(fp);
	system(S);
	return 0;
	}