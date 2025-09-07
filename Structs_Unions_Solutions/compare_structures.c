#include <stdio.h>
#include <string.h>

struct Point { int x; int y; };

// You must write a function to compare structures member by member.
// You cannot use '==' to compare two structures directly.
int arePointsEqual(struct Point p1, struct Point p2) {
    return (p1.x == p2.x) && (p1.y == p2.y);
}

int main() {
    struct Point a = {10, 20};
    struct Point b = {10, 20};
    struct Point c = {30, 40};

    if (arePointsEqual(a, b)) {
        printf("Points a and b are equal.\n");
    } else {
        printf("Points a and b are NOT equal.\n");
    }

    if (arePointsEqual(a, c)) {
        printf("Points a and c are equal.\n");
    } else {
        printf("Points a and c are NOT equal.\n");
    }

    return 0;
}
