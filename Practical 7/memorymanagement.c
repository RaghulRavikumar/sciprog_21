#include<stdio.h>
#include<stdlib.h>

//function to allocate memory for array
int* mallocarray(int n)
{
	int* array;
	array = (int*) malloc(n * sizeof(int));
	printf("Array of size %d allocated\n", n);
	return array;
}

//function to fill array with ones
void fillwithones(int* array, int n)
{
	int i;
	for(i=0; i<n; i++)
		array[i] = 1;
}

//function to print array
void printarray(int *array, int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d ", array[i]);
	printf("\n"); 
}

//function to deallocate memory
void freearray(int* array)
{
	free(array);
	printf("Array freed!\n");
}

void main(){

	int n;
	int* array_main;

	printf("Enter the Number of Elements:"); //getting input from user
	scanf("%d", &n);

	array_main = mallocarray(n); //allocating memory
	fillwithones(array_main, n); //filling array with ones
	printarray(array_main, n);   //printing array
	freearray(array_main);       //deallocating memory
	array_main = NULL;
} 
