#include <stdio.h>
#define ROWS 2
#define COLS 2
void addMatrices(int (*a)[COLS], int (*b)[COLS], int (*sum)[COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            *(*(sum + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }
}
int main() {
    int A[ROWS][COLS] = {{1, 2}, {3, 4}};
    int B[ROWS][COLS] = {{5, 6}, {7, 8}};
    int S[ROWS][COLS];
    addMatrices(A, B, S);
    printf("Sum of matrices:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) printf("%d ", S[i][j]);
        printf("\n");
    }
    return 0;
}
