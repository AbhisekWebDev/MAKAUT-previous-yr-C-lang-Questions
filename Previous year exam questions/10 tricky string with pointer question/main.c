#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[] = "Bombay", str2[] = "Hyderbad";
    char ch[] = "Abhisek";
    char c = 'A';
    char s = "Abhi";
    char *sptr = "Abhi";
    char *s1 = str1, *s2 = str2;
    while(*s1++ != NULL)
        *s2++ = *s1++;
        printf("%s, %s, %c, %s, %s", s2, ch, c, s, sptr);
    return 0;
}

/*
char *sptr = "Abhi";:
    This line is a declaration and initialization in C, where:

char *s:
    Declares a pointer variable named s.
    This pointer is intended to point to a character or a sequence of characters (string).

"Abhi":
    This is a string literal in C, which represents an array of characters terminated by the null character '\0'.
    It creates a string containing the characters 'A', 'b', 'h', 'i', and the null terminator.

So, char *s = "Abhi"; initializes the pointer s to point to the first character of the string literal "Abhi".

When you declare char *s = "Abhi"; :
    you're essentially setting s to point to the memory location where the string literal "Abhi" is stored
    in the program's memory. This pointer s can be used to access the characters in the string "Abhi"
    and manipulate them, such as printing the string, accessing individual characters,
    or passing it to functions that expect strings represented as pointers to characters (char *).
    It's important to note that in C, string literals are typically stored in read-only memory,
    and attempting to modify them directly through the pointer s could result in undefined behavior.
    For instance, attempting to change characters in the string pointed to by s like s[0] = 'B';
    is illegal and might lead to program crashes or unexpected behavior.
*/

/*
char str1[] = "Bombay", str2[] = "Hyderbad";:
    Two character arrays str1 and str2 are initialized with strings "Bombay" and "Hyderbad" respectively.

char ch[] = "Abhisek";: Another character array ch is initialized with the string "Abhisek".

char c = 'A';: A character variable c is initialized with the character 'A'.

char s = "Abhi";:
    There is an issue in this line. char s is declared as a character variable but assigned a string literal,
    which should be a character array or a pointer to a character.
    This will likely produce a warning or error during compilation because
    assigning a string literal to a single character variable is incorrect in C.

char *s1 = str1, *s2 = str2;: Two pointers s1 and s2 are initialized to the addresses of str1 and str2 respectively.

while (*s1++ != NULL) *s2++ = *s1++;:
        This while loop appears to try to copy the contents of str1 to str2. However, there are issues in this loop:

*s1++ != NULL:
    This condition checks if the value that s1 is pointing to is not equal to NULL.
    However, NULL is typically used with pointers, not characters.
    This is likely intended to check for the null terminator '\0'.
*s2++ = *s1++;: This line tries to copy the content of s1 to s2,
but the pointer increment s1++ and s2++ might not function as expected within the loop
due to the sequence of operations.
printf("%s, %s, %c, %s", s2, ch, c, s);: This printf statement attempts to print:

s2: The modified str2.
ch: The string "Abhisek".
c: The character 'A'.
s: However, as mentioned earlier, s is declared incorrectly as a character variable and assigned a string literal,
which is not permissible in C.
*/
