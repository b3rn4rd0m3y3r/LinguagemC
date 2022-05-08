#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Define uma constante
// Define a constant
#define MAX 8
 
// Protótipo da função de ordenação
// Ordination function prototype
void quick_sort(char **a, int left, int right);

// Um item de array é recebido como arr[]
int vetString(char* aVet[], char *x[]){
	char *buff[50];
	char *buffer[50];
	memcpy(buff, aVet, sizeof(buff));
	snprintf(buffer, sizeof(buffer), "%s", (char *)aVet );
	return strcmp(buffer,x);
	}

// Função main
// Main Function
int main(int argc, char** argv){
 int i;
 char *vet[MAX];
 
 // Lê MAX ou 10 valores
 // Read MAX or 10 values

 
 	vet[0] = "Vania";
  	vet[1] = "Alex";
   	vet[2] = "Zeus";
    vet[3] = "Maria";
    vet[4] = "Baco";
    vet[5] = "Netuno";
    vet[6] = "Nero";
  	vet[7] = "Caligula";
  	
  	
 
 // Ordena os valores
 // Order values
 quick_sort(vet, 0, MAX - 1);
 
 // Imprime os valores ordenados
 // Print values in order ascendant
 printf("\nValores ordenados\n");
 for(i = 0; i < MAX; i++){
  printf("%s\n", vet[i]);
 }
 system("pause");
 return 0;
}



// Função de Ordenação por Seleção
// Quick sort function
void quick_sort(char **a, int left, int right) {
    int i, j, y, res, ctloops;
    char *x;
    char *buffer[50];
    char *tmpArr[50];
    //const char *nomep;
     
    i = left;
    j = right;
	char *c;
	c = 32;
	int k = 0;
	ctloops = 0;
    
    memcpy(buffer, a[(left + right) / 2], sizeof(buffer));

    
    printf("i = %d - j = %d - Meio: %d - Pivot: %s\n",i,j,(left + right) / 2,(char *)buffer);
    // Converte Array de char para char
	x = (char *)buffer;
    printf("Pivot <<< %s >>>\n",x);
    //printf("a[0] cmp x: %d\n",vetString(a[0],x));
    // Comparar a[(left + right) / 2] (buffer) com a[i] (tmpArr)
    /*
	memcpy(tmpArr, a[0], sizeof(tmpArr));
    res = strcmp(tmpArr, buffer);
    printf("Vania e Maria: %d\n",res); // a[0] = "Vania" e a[3] = "Maria" - Resultado 1 Vania > Maria
    memcpy(tmpArr, a[1], sizeof(tmpArr));
    res = strcmp(tmpArr, buffer);
    printf("Alex e Maria: %d\n",res);  // a[1] = "Alex" e a[3] = "Maria" - Resultado -1 Alex < Maria  
    */
	// Procede à ordenação
	//printf("%s\n",typename(a[i]));
    
	while(i <= j) {
        ctloops++;
		printf("WI(%i)____ i = %i ____ j = %i ____\n", ctloops,i,j);
		// CONTA QUANTOS ELEMENTOS DA ESQUERDA SÃO MENORES QUE O PIVOT
		while(vetString(a[i],x) == -1 && i < right) {
            printf("LEFT: %s < %s\n", a[i], x);
			i++;
        	}
        printf("Final LEFT: i = %i\n", i);
        // CONTA QUANTOS ELEMENTOS DA DIREITA SÃO MAIORES QUE O PIVOT
		while(vetString(a[j],x) == 1 && j > left) {
            printf("RIGHT: %s > %s\n", a[j], x);
			j--;
        	}
        printf("Final RIGHT: j = %i\n", j);
        if(i <= j) {
            printf("(i<=j) => swap %s %s \n", (char *)a[i], (char *)a[j]);
			y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        	}
    	printf("WF(%i)____ i = %i ____ j = %i ____\n", ctloops,i,j);
		}
    printf("While END (%i)____ i = %i ____ j = %i ____\n", i,j);
    printf("Final while i < j: %s\n", "");
    printf("_______________________________________________\n","");
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
	
}
