#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }
    printf("Sum of array elements is %d\n", sum);
    return 0;
}
