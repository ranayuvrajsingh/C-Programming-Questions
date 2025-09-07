#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows = 3, cols = 4;
    int **arr;
    // Allocate memory for rows (array of int pointers)
    arr = (int **)malloc(rows * sizeof(int *));
    if (!arr) return 1;

    // Allocate memory for columns for each row
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (!arr[i]) return 1;
    }

    // Use the 2D array
    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = count++;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
