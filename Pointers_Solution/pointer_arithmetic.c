#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Value at ptr: %d, Address: %p\n", *ptr, (void*)ptr);

    // Incrementing a pointer moves it by the size of the data type it points to.
    // For an int (typically 4 bytes), ptr + 1 moves the address by 4 bytes.
    ptr++;
    printf("Value at ptr after increment: %d, Address: %p\n", *ptr, (void*)ptr);

    ptr = ptr + 2; // Move pointer by 2 * sizeof(int)
    printf("Value at ptr after adding 2: %d, Address: %p\n", *ptr, (void*)ptr);

    return 0;
}
