#include <stdio.h>
#define SIZE 2
void multiplyMatrices(int (*a)[SIZE], int (*b)[SIZE], int (*res)[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            *(*(res + i) + j) = 0;
            for (int k = 0; k < SIZE; k++) {
                *(*(res + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }
}
int main() {
    int A[SIZE][SIZE] = {{1, 2}, {3, 4}};
    int B[SIZE][SIZE] = {{5, 6}, {7, 8}};
    int R[SIZE][SIZE];
    multiplyMatrices(A, B, R);
    printf("Product of matrices:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) printf("%d ", R[i][j]);
        printf("\n");
    }
    return 0;
}
