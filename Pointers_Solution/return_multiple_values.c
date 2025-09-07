#include <stdio.h>
// This function "returns" two values by modifying the content of the pointers.
void getMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for(int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int min_val, max_val;
    getMinMax(arr, 5, &min_val, &max_val);
    printf("Minimum value: %d\n", min_val);
    printf("Maximum value: %d\n", max_val);
    return 0;
}
