#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);

int main() {
    // Declare function pointers
    int (*operationPtr)(int, int);

    // Assigning function addresses to function pointers
    operationPtr = add;
    printf("Addition result: %d\n", operationPtr(5, 3));

    operationPtr = subtract;
    printf("Subtraction result: %d\n", operationPtr(5, 3));

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
