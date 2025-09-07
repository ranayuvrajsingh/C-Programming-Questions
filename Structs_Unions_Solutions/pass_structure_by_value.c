#include <stdio.h>

struct Point {
    int x;
    int y;
};

// This function receives a COPY of the structure.
// Changes made inside this function will not affect the original.
void displayPoint(struct Point p) {
    printf("Inside function: (%d, %d)\n", p.x, p.y);
    p.x = 100; // This change is local to the function
}

int main() {
    struct Point p1 = {10, 20};
    printf("Before calling function: (%d, %d)\n", p1.x, p1.y);
    displayPoint(p1);
    printf("After calling function: (%d, %d) - Unchanged.\n", p1.x, p1.y);
    return 0;
}
