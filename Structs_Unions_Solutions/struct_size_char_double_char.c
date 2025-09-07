#include <stdio.h>
struct Test { char c1; double d; char c2; };
int main() {
    // Layout: char(1) + pad(7) + double(8) + char(1) + pad(7)
    // Total size is a multiple of largest member (double=8), so 24 bytes.
    printf("Size: %zu\n", sizeof(struct Test));
    return 0;
}
