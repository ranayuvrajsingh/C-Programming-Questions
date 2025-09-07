#include <stdio.h>
// When passing an array, you are passing a pointer to its first element.
void printArray(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // or *(arr + i)
    }
    printf("\n");
}
int main() {
    int data[] = {10, 20, 30, 40, 50};
    printArray(data, 5);
    return 0;
}
