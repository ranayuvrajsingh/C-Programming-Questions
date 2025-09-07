#include <stdio.h>
#include <stdlib.h>
// Comparison function for qsort to sort in ascending order
int compare_asc(const void *a, const void *b) {
   return (*(int*)a - *(int*)b);
}
// Comparison function for qsort to sort in descending order
int compare_desc(const void *a, const void *b) {
   return (*(int*)b - *(int*)a);
}
int main() {
    int arr[] = {50, 20, 80, 10, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    // qsort takes a pointer to a comparison function as its last argument.
    qsort(arr, n, sizeof(int), compare_asc);
    printf("Array sorted in ascending order: ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    qsort(arr, n, sizeof(int), compare_desc);
    printf("Array sorted in descending order: ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
