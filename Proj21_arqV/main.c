#include <stdio.h>
#include <stdlib.h>
#include <string.h>>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

FILE *abra(char arq[]){
	FILE *fpp;
	if( fpp = fopen(arq,"r")){
		printf("Abriu");
		} else {
		printf("No Abriu");
		}
	return fpp;
	}

int main(int argc, char *argv[]) {
	int size = strlen(argv[1]);
	char buf[size+10];
	memcpy(buf, argv[1], size+1);
	//memccpy(buf, argv[1], '\0', size+1);
	snprintf(buf, sizeof(buf), "%s", argv[1]);
	printf("%s\n",buf);
	FILE *fp = fopen(argv[1],"r");
	if( fp != NULL ){
		printf("Abriu");
		} else {
		printf("No Abriu %s",fp);
		}
	return 0;
}