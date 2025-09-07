#include <stdio.h>
struct Person { char name[20]; int age; float height; };
int main() {
    struct Person p = {"John", 30, 5.9};
    printf("Name: %s, Age: %d, Height: %.1f\n", p.name, p.age, p.height);
    printf("Size of struct Person: %zu bytes\n", sizeof(p));
    return 0;
}
