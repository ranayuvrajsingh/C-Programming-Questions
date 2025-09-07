#include <stdio.h>
#include <stdlib.h> // For malloc and free
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    int largest = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }
    printf("Largest element is: %d\n", largest);

    free(arr); // Free the allocated memory
    return 0;
}
