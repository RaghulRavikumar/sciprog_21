#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int n);
double poly(int n, int x);

void main()
{
	//declaration
	int order_of_polynomial,array_size,i,x=1;
	double* array;

	//input from user
	printf("Enter the order of the polynomial: ");
	scanf("%d", &order_of_polynomial);

	//memory allocation
	array_size = order_of_polynomial + 1;
	array = (double *) malloc(array_size * sizeof(double));

	
	for(i = 0; i<array_size; i++){
		array[i] = poly(i,x);
		printf("f(%d) = %0.20f\n", i, array[i]);
	}
	
	printf("True value of e is = %0.20f\n", exp(1));

	//differences in values
	for(i=0; i< array_size; i++){
		printf("Difference for term %d is %0.20f\n", i, exp(1)-array[i]);
	}
	
	//memory deallocation
	free(array);
	array = NULL ;
}

//function to calculate factorial
int factorial(int n){
	int i,fact=1;
	if(n==0)
		return 1;
	for(i=1; i<=n; i++)
		fact = fact * i;
	return fact;
}

//function to calculate polynomial
double poly(int n, int x)
{
    double sum=0.0;
	int i;
    for(i=0; i<=n; i++)
		sum = sum + (double)pow(x,i) / factorial(i);
	return sum;
}