#include <stdio.h>
#include <stdlib.h>

// We allocate memory for an array of n integers using malloc() with the size n * sizeof(int).
// We check if the memory allocation was successful by ensuring ptr is not NULL.
// We initialize the array elements.
// We print the array elements.
// Finally, we free the dynamically allocated memory using free().


int main() {
    int *ptr;
    int n = 5; // Number of elements

    // Allocating memory dynamically using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize array elements
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // Printing array elements
    printf("Array elements using malloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Free dynamically allocated memory
    free(ptr);

    return 0;
}
