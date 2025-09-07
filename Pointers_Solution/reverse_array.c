#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5}, temp;
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    printf("Reversed array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
