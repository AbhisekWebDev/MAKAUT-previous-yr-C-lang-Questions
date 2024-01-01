#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[50], s2[50] = "Hello";
    s1 = s1;
    printf("%s", s1);
    return 0;
}

// compiler error hoga
