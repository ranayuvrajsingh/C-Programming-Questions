#include <stdio.h>

// The compiler adds padding to align data members to memory addresses
// that are a multiple of their size. This improves performance.
struct Example {
    char a;    // 1 byte
    // 3 bytes of padding here to align 'b' on a 4-byte boundary
    int b;     // 4 bytes
    char c;    // 1 byte
    // 3 bytes of padding here to make the total size a multiple of 4 (the largest member)
};

int main() {
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    // Expected size might be 1 + 4 + 1 = 6, but due to padding it will likely be 12.
    printf("Size of struct Example: %zu bytes\n", sizeof(struct Example));
    return 0;
}
