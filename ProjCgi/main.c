#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  char *dados;
	  printf("Content-type: text/html\n\n");
	  dados = getenv("QUERY_STRING");
	  printf("<html>\n");
	  
	  printf("<head>\n" );
	  printf("<meta charset=\"UTF-8\">\n" );
	  printf("</head>\n");
	  printf("<body>\n" );
	  printf("<h1>Olá , Mundo!</h1>\n");
	  printf("<p>%s</p>\n",dados);
	  printf("</body>\n" );
	  
	  printf("</html>\n");
	return 0;
}