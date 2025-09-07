#include <stdio.h>
struct Test { int a; int b; char c; char d; float f; };
int main() {
    // Layout: int (4) + int (4) + char (1) + char (1) + padding (2) + float (4)
    // Total size is a multiple of largest member (int/float=4), so 16 bytes.
    printf("Size: %zu\n", sizeof(struct Test));
    return 0;
}
