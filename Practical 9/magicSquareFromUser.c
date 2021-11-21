#include<stdio.h>
#include<stdlib.h>
#include "magic_square.h" //inclding magic_square header

void main(){
    int size,i,j; //declearation
    printf("Enter the square side:\n");
    scanf("%d", &size); //getting side from user 

    //dynamic memory allocation
    int **magicsquare = malloc(size * sizeof(int));
    for(i=0; i<size ; i++){
        magicsquare[i] = malloc(size * sizeof(int));
    }

    //get matrix entries from user
    for(i=0; i<size; i++){
        printf("Enter the elements of row %d separated by blank on new line : \n", i+1);
        for(j=0; j<size; j++){
            scanf("%d", &magicsquare[i][j]);
        }
    }

    printf("The square %s magic\n", isMagicSquare(magicsquare,size)? "is": "is NOT"); //calling isMagicSquare function in magic_square header

    //deallocating memory
    for(i=0;i<size;i++)
        free(magicsquare[i]);
    free(magicsquare);
}