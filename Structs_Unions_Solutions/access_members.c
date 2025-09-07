#include <stdio.h>
#include <string.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1;

    // The dot (.) operator is used to access the members of a structure variable.
    p1.x = 10;
    p1.y = 20;

    printf("The coordinates of the point are (%d, %d)\n", p1.x, p1.y);
    return 0;
}
