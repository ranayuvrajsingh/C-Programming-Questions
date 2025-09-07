#include <stdio.h>
int main() {
    int *int_ptr;
    char *char_ptr;
    double *double_ptr;

    // The size of a pointer is the same regardless of the data type it points to.
    // It depends on the system architecture (e.g., 8 bytes on a 64-bit system).
    printf("Size of an integer pointer: %zu bytes\n", sizeof(int_ptr));
    printf("Size of a character pointer: %zu bytes\n", sizeof(char_ptr));
    printf("Size of a double pointer: %zu bytes\n", sizeof(double_ptr));
    return 0;
}
