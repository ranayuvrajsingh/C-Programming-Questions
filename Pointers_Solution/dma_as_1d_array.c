#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 5;
    // Allocate memory for 5 integers on the heap
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) return 1; // Check for allocation failure
    printf("Enter 5 integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    free(arr); // Always free dynamically allocated memory
    return 0;
}
