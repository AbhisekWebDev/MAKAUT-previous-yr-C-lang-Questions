#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 1, c = 2, x;
    x = a++ || b++ || c++;
    printf("%d %d %d %d", x, a, b, c);
    return 0;
}
