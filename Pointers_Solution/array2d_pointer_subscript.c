#include <stdio.h>
int main() {
    int arr[2][3] = {{10, 11, 12}, {13, 14, 15}};

    printf("Accessing with pointer notation *(*(arr+i)+j):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    return 0;
}
