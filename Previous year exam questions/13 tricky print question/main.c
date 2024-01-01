#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%i \n", 35, 2 + 8 * 5 % 10 - 2);

    // comma operator h, ye comma k bad k elements ko discard krta h aur sirf first wale ko hi output krwata h

    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    int a = printf("00"); printf("%d", a);

    /*
    printf("00");: This prints the string "00" to the standard output (usually the console).
    The printf function returns the number of characters printed, which in this case is 2 (two characters: '0' and '0').

    int a = printf("00");: This line assigns the value returned by printf("00") to the variable a.
    Since printf("00") prints 2 characters, the value 2 is assigned to a.

    printf("%d", a);: This line uses printf to print the value of a as an integer using the %d format specifier.
    The value of a is 2, so it will print 2.
    */

    return 0;
}

