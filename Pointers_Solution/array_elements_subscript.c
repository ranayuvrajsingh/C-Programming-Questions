#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Accessing array elements using subscript notation arr[i]:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }
    return 0;
}
