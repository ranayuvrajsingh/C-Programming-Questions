#include <stdio.h>
void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    printf("Original array: ");
    for(int i=0; i<5; i++) printf("%d ", nums[i]);
    reverseArray(nums, 5);
    printf("\nReversed array: ");
    for(int i=0; i<5; i++) printf("%d ", nums[i]);
    printf("\n");
    return 0;
}
