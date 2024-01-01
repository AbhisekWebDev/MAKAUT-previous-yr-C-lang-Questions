#include <stdio.h>
#include <stdlib.h>

f() {

    static int i = 0;

    i++;

    if(i <= 3) {

      printf("\n %d \n", i);
        f();
    }

    else
        exit(0);
}

int main()
{
    f();
    return 0;
}
