#include <stdio.h>
int main() {
    int arr[5] = {100, 200, 300, 400, 500};
    int *ptr = arr;

    printf("Dereferencing ptr gives the first element: *ptr = %d\n", *ptr);
    printf("Dereferencing (ptr+2) gives the third element: *(ptr+2) = %d\n", *(ptr + 2));
    return 0;
}
