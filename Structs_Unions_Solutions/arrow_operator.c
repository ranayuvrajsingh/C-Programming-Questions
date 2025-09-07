#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

int main() {
    // Declare a pointer to a Point structure
    struct Point *ptr;

    // Allocate memory for the structure on the heap
    ptr = (struct Point*)malloc(sizeof(struct Point));
    if (ptr == NULL) return 1;

    // The arrow (->) operator is a shorthand to access members
    // of a structure through a pointer.
    // ptr->x is equivalent to (*ptr).x
    ptr->x = 15;
    ptr->y = 25;

    printf("Coordinates accessed with arrow operator: (%d, %d)\n", ptr->x, ptr->y);
    printf("Coordinates accessed with (*ptr).x notation: (%d, %d)\n", (*ptr).x, (*ptr).y);

    free(ptr);
    return 0;
}
