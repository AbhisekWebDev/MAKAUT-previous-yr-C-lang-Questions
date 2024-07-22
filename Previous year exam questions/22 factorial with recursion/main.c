#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
   //base case
   if(n == 0) {
      return 1;
   } else {
      return n * factorial(n-1);
   }
}

int main()
{
    int n = 5;

    printf("Factorial of %d: %d\n" , n , factorial(n));

    return 0;
}
