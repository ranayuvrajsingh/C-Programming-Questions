#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Size of the array (arr): %zu bytes\n", sizeof(arr));
    printf("Size of the pointer (ptr): %zu bytes\n", sizeof(ptr));
    printf("\n'arr' is an array, its size is the total bytes for all its elements.\n");
    printf("'ptr' is just a pointer, its size is fixed by the system architecture.\n");
    return 0;
}
