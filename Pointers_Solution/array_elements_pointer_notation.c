#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Accessing array elements using pointer notation *(arr + i):\n");
    // The name of an array (arr) acts as a pointer to its first element.
    // *(arr + i) is equivalent to arr[i].
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(arr + i));
    }
    return 0;
}
