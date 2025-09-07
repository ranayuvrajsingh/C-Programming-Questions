#include <stdio.h>
struct Test { char a; int b; char c; };
int main() {
    // Layout: char (1) + padding (3) + int (4) + char (1) + padding (3)
    // Total size will be a multiple of the largest member (int=4), so 12 bytes.
    printf("Size: %zu\n", sizeof(struct Test));
    return 0;
}
