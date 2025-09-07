#include <stdio.h>
#include <stdlib.h>
void findMinMax(int *arr, int size, int *min, int *max) {
    if (size <= 0) return;
    *min = *arr;
    *max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) *min = *(arr + i);
        if (*(arr + i) > *max) *max = *(arr + i);
    }
}
int main() {
    int nums[] = {22, 5, 67, 1, 99, 14};
    int min_val, max_val;
    findMinMax(nums, 6, &min_val, &max_val);
    printf("Min: %d, Max: %d\n", min_val, max_val);
    return 0;
}
