#include <stdio.h>
#pragma pack(1) // Force packing on 1-byte boundaries (no padding)
struct Test {
    double d; // 8 bytes
    char c;   // 1 byte
};
#pragma pack() // Reset to default packing
int main() {
    // Total size = 8 + 1 = 9 bytes, because padding is removed.
    printf("Size of packed struct: %zu\n", sizeof(struct Test));
    return 0;
}
