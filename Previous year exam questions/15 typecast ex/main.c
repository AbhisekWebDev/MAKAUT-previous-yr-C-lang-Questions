#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 10;
    int num2 = 4;
    float result;

    // Perform integer division
    result = num1 / num2;
    printf("Result without typecasting: %f\n", result);

    // Typecast one of the operands to float for floating-point division
    result = (float)num1 / num2;
    printf("Result with typecasting: %f\n", result);

    return 0;
}
