#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // 'ptr' is a single pointer that points to the entire array of 5 integers.
    // This is different from a pointer to the first element.
    int (*ptr)[5];
    ptr = &arr;

    printf("Accessing elements via pointer to array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*ptr)[i]);
    }
    printf("\n");
    return 0;
}
