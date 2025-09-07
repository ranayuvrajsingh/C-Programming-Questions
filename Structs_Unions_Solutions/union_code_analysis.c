#include <stdio.h>
union Data { int i; float f; char c; };
int main() {
    union Data d;
    d.i = 65;
    printf("As int: %d\n", d.i);
    printf("As char: %c\n", d.c); // Reads the first byte of the int
    printf("Size of union Data: %zu bytes\n", sizeof(d));
    return 0;
}
