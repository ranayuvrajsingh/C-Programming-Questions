#include <stdio.h>
struct Test { char a; short b; int c; char d; };
int main() {
    // Layout: char(1) + pad(1) + short(2) + int(4) + char(1) + pad(3)
    // Total size is a multiple of largest member (int=4), so 12 bytes.
    printf("Size: %zu\n", sizeof(struct Test));
    return 0;
}
