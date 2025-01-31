/*
Problem Statement->Write a C program to enter any number and calculate its square root.
*/


/*
Solution.
*/
#include <math.h>
#include <stdio.h>

int main() {
   double number, squareRoot;

   printf("Enter a number: ");
   scanf("%lf", &number);

   // computing the square root
   squareRoot = sqrt(number);

   printf("Square root of %.2lf =  %.2lf", number, squareRoot);

   return 0;
}