#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    a = b = 2, 4;
    printf("%d %d \n", a, b);

    int num, c = 1;
    num = ++c * 5;
    printf("%d \n", num);

    int num1 = 2;
    printf("%d \n", num1 *= 4);

    int num2, d = 2, e = 5;
    num2 = d++ - e * 2;
    printf("%d", num2);

    return 0;
}
