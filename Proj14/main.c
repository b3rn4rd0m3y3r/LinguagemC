#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining comparator function as per the requirement
static int myCmp(const void* a, const void* b)
{

	// Regra de comparação (Um caracter por vez)
	// Resultados:
	/*
		Um valor menor que zero significa que a é menor que b.
		
		Um valor zero significa que a é igual a b.
		
		Um valor maior que zero significa que a é maior que b.
	*/
	return strcmp(*(const char**)a, *(const char**)b);
}

// Function to sort the array
void sort(const char* arr[], int n)
{
	// Chama qsort (realmente um Bubble Sort)
	// usando seu Comparador myCmp
	qsort(arr, n, sizeof(const char*), myCmp);
}

int main()
{

	// Get the array of names to be sorted
	const char* arr[]
		= { "Flavio", "Aroldo", "Fernando", "Joao", "Maria", "Ana", "Helena", "Vera", "Pedro", "Mateus", "Boaz", "Manoel" };

	int n = sizeof(arr) / sizeof(arr[0]);
	int i;

	// Print the given names
	printf("Array inicial\n");
	for (i = 0; i < n; i++)
		printf("%d: %s \n", i, arr[i]);

	// Sort the given names
	sort(arr, n);

	// Print the sorted names
	printf("\nArray ordenado\n");
	for (i = 0; i < n; i++)
		printf("%d: %s \n", i, arr[i]);

	return 0;
}
