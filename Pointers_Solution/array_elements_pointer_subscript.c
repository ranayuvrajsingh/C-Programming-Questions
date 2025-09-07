#include <stdio.h>
int main() {
    int arr[5] = {11, 22, 33, 44, 55};
    int *ptr = arr; // Pointer to the first element

    printf("Accessing with pointer subscript notation ptr[i]:\n");
    // You can use array-style subscript notation on a pointer that points to an array.
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, ptr[i]);
    }
    return 0;
}
