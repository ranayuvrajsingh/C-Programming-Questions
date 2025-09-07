#include <stdio.h>
struct Test { char a; char b; };
int main() {
    // Layout: char (1) + char (1)
    // No padding needed. Total size is 2 bytes.
    printf("Size: %zu\n", sizeof(struct Test));
    return 0;
}
