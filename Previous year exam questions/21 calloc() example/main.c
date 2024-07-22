#include <stdio.h>
#include <stdlib.h>

// We allocate memory for an array of n integers using calloc()
// with the number of elements n and the size of each element sizeof(int).
// We check if the memory allocation was successful by ensuring ptr is not NULL.
// We print the array elements, which will all be 0 as calloc() initializes the allocated memory to 0.
// Finally, we free the dynamically allocated memory using free().

int main() {
    int *ptr;
    int n = 5; // Number of elements

    // Allocating memory dynamically using calloc
    ptr = (int *)calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Printing array elements (all elements will be 0 as calloc initializes memory to 0)
    printf("Array elements using calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Free dynamically allocated memory
    free(ptr);

    return 0;
}
