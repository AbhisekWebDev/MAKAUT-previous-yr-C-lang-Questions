#include <stdio.h>
#include <string.h>

int main() {

    printf("%d, %d", sizeof("string"), strlen("string"));

    return 0;
}

/*
sizeof("string"): The sizeof operator in C returns the size of its operand in bytes.
When applied to a string literal like "string",
it includes the null terminator ('\0') in addition to the characters in the string. Therefore,
sizeof("string") will evaluate to 7 (6 characters of "string" + 1 null terminator).

strlen("string"): The strlen function in C calculates the length of a string excluding the null terminator.
It returns the number of characters in the string. For "string",
which contains 6 characters ('s', 't', 'r', 'i', 'n', 'g'), strlen("string") will evaluate to 6.
*/
