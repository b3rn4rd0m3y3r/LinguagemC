#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	float soma;
	soma = 0;
	for(i=1;i<30001;i++){
		printf("%d ",i);
		soma += i;
		}
	printf("\nSOMA: %f ",soma);
	return 0;
}