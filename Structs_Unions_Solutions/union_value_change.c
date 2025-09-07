#include <stdio.h>
union Data { int x; int y; };
int main() {
    union Data d;
    d.x = 10;
    printf("Initially, d.x = %d, d.y = %d\n", d.x, d.y);
    // Since x and y share the same memory, changing y also changes x.
    d.y = 20;
    printf("After changing y, d.x = %d, d.y = %d\n", d.x, d.y);
    return 0;
}
