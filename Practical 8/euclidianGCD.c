#include <stdio.h>

int euclidianGCD(int a, int b); //GCD without recursion
int recursiveGCD(int a, int b); //GCD using recursion 

void main() 
{
   int a, b, error; //variable decleration

   printf("Please Enter two positive integers\n"); //user to enter two positive integers
   error = scanf("%d %d",&a,&b);

   //checking any error
   if (error != 2) {
     printf("Please try again\n");
   }
   //checking for any negative inputs
   if (a<=0 || b<=0) {
     printf("Please enter positive numbers only\n");
   }
  printf("\nWithout Recursion\n");
  printf("GCD for %d and %d is = %d\n", a, b, euclidianGCD(a,b)); //without recursion
  printf("\nUsing Recursion\n");
  printf("GCD for %d and %d is = %d\n\n", a, b, recursiveGCD(a,b)); //with recursion
}

int euclidianGCD(int a , int b)
{
  int temp;
  while(b != 0)
  {
     temp = b;
     b = a%b;
     a = temp;    
  }
  return a;
}

int recursiveGCD(int a, int b){
    if(b == 0)
    {
        return a;
    }
    else
        return(recursiveGCD(b, a%b));
}
