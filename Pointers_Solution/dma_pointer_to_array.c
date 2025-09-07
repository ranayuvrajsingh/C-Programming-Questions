#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    int n = 5;
    // calloc initializes the allocated memory to zero.
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    printf("Memory successfully allocated using calloc.\n");
    printf("The elements of the array are: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}
