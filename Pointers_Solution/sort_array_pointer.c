#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Bubble sort using pointers
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}
int main() {
    int nums[] = {5, 2, 8, 1, 9};
    int n = 5;
    sortArray(nums, n);
    printf("Sorted array: ");
    for(int i=0; i<n; i++) printf("%d ", nums[i]);
    printf("\n");
    return 0;
}
