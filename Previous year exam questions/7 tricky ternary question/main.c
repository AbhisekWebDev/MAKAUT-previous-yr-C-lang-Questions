#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, num = 30;
    k = (num> 5 ? (num < 10 ? 100 : 200) : 500);
    printf("%d, %d", num, k);
    return 0;
}

// output = 30, 200
