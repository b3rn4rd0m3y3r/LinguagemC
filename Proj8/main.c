#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *S[50];
	char *ptr;
	FILE *fptr;
	fptr = fopen("arq.csv","r");
	while (EOF != fscanf(fptr, "%[^\n]\n", S)){
		ptr = strtok(S, ";");
		while (ptr != NULL){
			printf("'%s' ", ptr);
			ptr = strtok(NULL, ";");
			}
		printf("%s\n", "");
		}
	
	fclose(fptr);
	return 0;
}