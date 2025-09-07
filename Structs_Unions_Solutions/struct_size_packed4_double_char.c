#include <stdio.h>
#pragma pack(4) // Force packing on 4-byte boundaries
struct Test {
    double d; // 8 bytes (natural alignment is 8, but pack is 4, so it aligns to 4)
    char c;   // 1 byte
    // padding(3) to make total size multiple of 4.
};
#pragma pack() // Reset to default packing
int main() {
    // Total size = 8 + 1 + 3 = 12 bytes.
    printf("Size of 4-byte packed struct: %zu\n", sizeof(struct Test));
    return 0;
}
