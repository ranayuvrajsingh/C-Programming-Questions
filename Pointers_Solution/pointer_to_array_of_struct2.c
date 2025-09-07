#include <stdio.h>
#include <stdlib.h>
struct Point { int x; int y; };
int main() {
    struct Point *ptr;
    int n = 3;
    ptr = (struct Point *)malloc(n * sizeof(struct Point));
    if(!ptr) return 1;

    for (int i = 0; i < n; i++) {
        (ptr + i)->x = i * 10;
        (ptr + i)->y = i * 20;
    }
    printf("Points:\n");
    for (int i = 0; i < n; i++) {
        printf("(%d, %d)\n", ptr[i].x, ptr[i].y);
    }
    free(ptr);
    return 0;
}
