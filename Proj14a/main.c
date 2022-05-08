#include <stdio.h>
#include <stdlib.h>
#define MAX 8

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv) {
    int i, j, y, res;
    
 	char *a[MAX];
 
 // LÃª MAX ou 10 valores
 // Read MAX or 10 values

 
 	a[0] = "Vania";
  	a[1] = "Alex";
   	a[2] = "Zeus";
    a[3] = "Maria";
    a[4] = "Baco";
    a[5] = "Netuno";
    a[6] = "Nero";
  	a[7] = "Caligula";
    char *x;
    char *buffer[50];
    char *tmpArr[50];
    const char *nomep;
     

	char *c;
	c = 32;
	int k = 0;
    
    memcpy(buffer, a[3], sizeof(buffer));
	//snprintf(buffer, sizeof(buffer), "%s", a[(left + right) / 2] );
    
    printf("%s\n",(char *)buffer);
    // Converte Array de char para char
	x = (char *) buffer;
    printf("%s\n",x);
    // Comparar a[(left + right) / 2] (buffer) com a[i] (tmpArr)
    memcpy(tmpArr, a[0], sizeof(tmpArr));
    // Comparação
    res = strcmp(tmpArr, buffer);
    //res = strcmp(a[0], a[3]); // Para constante char
    printf("Vania e Maria: %d\n",res); // a[0] = "Vania" e a[3] = "Maria" - Resultado 1 Vania > Maria
    memcpy(tmpArr, a[1], sizeof(tmpArr));
    res = strcmp(tmpArr, buffer);
    printf("Alex e Maria: %d\n",res);  // a[1] = "Alex" e a[3] = "Maria" - Resultado -1 Alex < Maria  
	return 0;
}