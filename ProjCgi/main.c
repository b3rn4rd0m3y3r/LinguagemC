#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  char *dados;
  char *string = getenv( "CONTENT_LENGTH" );
  int tamanho  = atoi( string );
  	char *vetor = getenv( "PATH_INFO" );
	char *vetor1 = getenv( "PATH_TRANSLATED" );
	char *vetor2 = getenv( "SCRIPT_NAME" );
	  
	  printf("Content-type: text/html\n\n");
	  dados = getenv("QUERY_STRING");
	  printf("<html>\n");
	  
	  printf("<head>\n" );
	  printf("<meta charset=\"UTF-8\">\n" );
	  printf("</head>\n");
	  printf("<body>\n" );
	  printf("<h1>Olá , Mundo!</h1>\n");
	  printf("<p>Parametros: %s</p>\n",dados);
	  printf("<p>URL: %s</p>\n",vetor);
	  printf("<p>PATH interno: %s</p>\n",vetor1);
	  printf("<p>SCRIPT: %s</p>\n",vetor2);
	  printf("</body>\n" );
	  
	  printf("</html>\n");
	return 0;
}