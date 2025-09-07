#include <stdio.h>
struct Test { char a; char b; short c; int d; };
int main() {
    // Smart compiler may pack a and b.
    // Layout: char(1) + char(1) + short(2) + int(4)
    // No padding needed within. Total size is 8 bytes.
    printf("Size: %zu\n", sizeof(struct Test));
    return 0;
}
