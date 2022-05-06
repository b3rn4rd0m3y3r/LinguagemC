#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0;
	int MAX;
	FILE *flst;
	char *ptra[80];
	flst = fopen("Lista.txt","w");
	MAX = argc;
	printf("No. de parametros: %d\n", MAX);
	for (i=0;i<argc;i++){
		snprintf(ptra, sizeof(ptra), "%s", argv[i]);
		printf("%s\n",ptra);
		fprintf(flst,"%s\n",ptra);
		}
	fclose(flst);
	return 0;
}