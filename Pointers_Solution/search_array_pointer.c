#include <stdio.h>
// Searches for a value and returns a pointer to it, or NULL if not found.
int* findValue(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return (arr + i); // Return the address of the element
        }
    }
    return NULL; // Not found
}
int main() {
    int nums[] = {11, 22, 33, 44, 55};
    int key = 33;
    int *found_ptr = findValue(nums, 5, key);
    if (found_ptr != NULL) {
        printf("Found %d at address %p\n", key, (void*)found_ptr);
    } else {
        printf("%d not found in the array.\n", key);
    }
    return 0;
}
