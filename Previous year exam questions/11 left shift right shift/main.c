#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y = 2, z;
    x = y << 1; // Bitwise left shift operation: shifting y by 1 position to the left
    z = y >> 2; // Bitwise right shift operation: shifting y by 2 positions to the right
    printf("%d \n", x);
    printf("%d", z);
    return 0;
}

// output = 4, 0

/*
int x, y = 2, z;: Declares three integer variables x, y, and z. y is initialized with the value 2.

x = y << 1;: Performs a bitwise left shift operation on y by 1 position (<< 1).
Bitwise left shift moves the bits of a number towards the left by the specified number of positions.
In this case, y (which is 2 in binary 10) shifted left by 1 position becomes 4 in decimal (100 in binary). Therefore, x will be assigned the value 4.

z = y >> 2;: Performs a bitwise right shift operation on y by 2 positions (>> 2).
Bitwise right shift moves the bits of a number towards the right by the specified number of positions.
Since y is 2 in binary 10, shifting it right by 2 positions will result in 0 because both bits are shifted out. Therefore, z will be assigned the value 0.

printf("%d \n", x);: Prints the value of x after the left shift operation. So, it will print 4 followed by a newline.

printf("%d", z);: Prints the value of z after the right shift operation. It will print 0.
*/
