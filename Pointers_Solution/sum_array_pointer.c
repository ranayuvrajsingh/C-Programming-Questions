#include <stdio.h>
int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Add the value at the current pointer position
    }
    return sum;
}
int main() {
    int data[] = {1, 2, 3, 4, 5};
    printf("Sum of array elements: %d\n", sumArray(data, 5));
    return 0;
}
