#include <stdio.h>
struct Test { char a; int b; char c; };
int main() {
    // Same as the previous example. Repetition doesn't change the rule.
    // Layout: char (1) + padding (3) + int (4) + char (1) + padding (3) = 12 bytes.
    printf("Size: %zu\n", sizeof(struct Test));
    return 0;
}
