#include <stdio.h>
#define PI 3.14159
struct Circle { double radius; };
struct Rectangle { double width; double height; };
union ShapeData {
    struct Circle c;
    struct Rectangle r;
};
enum ShapeType { CIRCLE, RECTANGLE };
struct Shape {
    enum ShapeType type;
    union ShapeData data;
};
double calculateArea(struct Shape s) {
    if (s.type == CIRCLE) {
        return PI * s.data.c.radius * s.data.c.radius;
    } else if (s.type == RECTANGLE) {
        return s.data.r.width * s.data.r.height;
    }
    return 0;
}
int main() {
    struct Shape s1;
    s1.type = CIRCLE;
    s1.data.c.radius = 5.0;
    printf("Area of circle: %.2f\n", calculateArea(s1));

    struct Shape s2;
    s2.type = RECTANGLE;
    s2.data.r.width = 4.0;
    s2.data.r.height = 6.0;
    printf("Area of rectangle: %.2f\n", calculateArea(s2));
    return 0;
}
