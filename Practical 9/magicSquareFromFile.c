#include<stdio.h>
#include<stdlib.h>
#include "magic_square.h" //using magic_square header file

#define MAX_FILE_NAME 100 //set max length of file to be 100

//function to get number of lines in the file (size of square)
int getlines(char filename[MAX_FILE_NAME])
{
    FILE *fp;
    int ch_read, count = 0;
    fp = fopen(filename, "r");

    //read characters till End Of File
    while((ch_read = fgetc(fp)) != EOF)
    {
        //increase count when line break found
        if(ch_read == '\n'){
            count += 1;
        }
    }

    printf("No of lines in the file : %d\n", count);
    fclose(fp);
    return count;
}

void main()
{
    int j, i, n;
    char filename[MAX_FILE_NAME];
    FILE *f;
    printf("Enter the File Name:\n");
    scanf("%s", filename); //get file name from user

    n = getlines(filename); // get size of matrix
    f = fopen(filename, "r"); //open file in read mode

    //dynamic memory allocation
    int **magicsquare = malloc(n * sizeof(int*));
    for(i=0; i<n ; i++)
    {
        magicsquare[i] = malloc(n * sizeof(int));
    }

    //get input from the file
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            fscanf(f,"%d", &magicsquare[i][j]);
        }

    printf("The square %s magic\n", isMagicSquare(magicsquare,n)? "is": "is NOT");

    //deallocate memory space
    for(i=0;i<n;i++)
        free(magicsquare[i]);
    free(magicsquare);
    fclose(f); //close file
}