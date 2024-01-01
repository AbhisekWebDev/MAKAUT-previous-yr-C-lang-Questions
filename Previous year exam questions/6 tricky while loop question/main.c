#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 500;
    while(x <= 500) {
        printf("Hello world!\n");
        x = x - 600;
        if(x < 0) break;
    }

    return 0;
}

/*
The initial value of x is set to 500. The while loop will continue running as long as the condition x <= 500 is true.

Inside the loop:

It prints "Hello world!" to the console.
It subtracts 600 from x (x = x - 600). So, x becomes -100.
Then, the condition x <= 500 is re-evaluated. Since -100 is not less than or equal to 500,
the loop exits immediately after the first iteration.

Therefore, the loop will run only once before exiting.
*/
