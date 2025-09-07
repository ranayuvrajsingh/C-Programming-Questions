#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    // Method 1: Initializing using an initializer list
    struct Point p1 = {10, 20};
    printf("p1 = (%d, %d)\n", p1.x, p1.y);

    // Method 2: Initializing using designated initializers (C99+)
    struct Point p2 = {.y = 40, .x = 30};
    printf("p2 = (%d, %d)\n", p2.x, p2.y);

    // Method 3: Initializing members one by one
    struct Point p3;
    p3.x = 50;
    p3.y = 60;
    printf("p3 = (%d, %d)\n", p3.x, p3.y);
    return 0;
}
