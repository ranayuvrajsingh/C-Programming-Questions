#include <stdio.h>
void swap(int *elem1, int *elem2) {
    int temp = *elem1;
    *elem1 = *elem2;
    *elem2 = temp;
}
int main() {
    int arr[] = {10, 20, 30, 40};
    printf("Before swap: arr[1]=%d, arr[3]=%d\n", arr[1], arr[3]);
    swap(&arr[1], &arr[3]); // Pass addresses of elements
    printf("After swap: arr[1]=%d, arr[3]=%d\n", arr[1], arr[3]);
    return 0;
}
