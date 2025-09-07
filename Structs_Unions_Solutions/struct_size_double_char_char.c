#include <stdio.h>
struct Test { double d; char c1; char c2; };
int main() {
    // Layout: double (8) + char (1) + char (1) + padding (6)
    // Total size will be a multiple of the largest member (double=8), so 16 bytes.
    printf("Size: %zu\n", sizeof(struct Test));
    return 0;
}
