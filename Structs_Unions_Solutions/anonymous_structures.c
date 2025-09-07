#include <stdio.h>

struct Container {
    int type;
    // An anonymous struct (no tag name) nested inside another struct
    struct {
        int x;
        int y;
    } point;
};

int main() {
    struct Container c;
    c.type = 1;
    c.point.x = 100;
    c.point.y = 200;

    printf("Container type: %d, Point: (%d, %d)\n", c.type, c.point.x, c.point.y);
    return 0;
}
