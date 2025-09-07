#include <stdio.h>

// A union can be used to interpret the same memory in different ways.
union Number {
    int i;
    float f;
};

int main() {
    union Number num;
    num.f = 3.14159;

    printf("Value as float: %f\n", num.f);
    // Accessing 'i' interprets the bits of the float as an integer.
    // The result is not 3, but the integer representation of the float's bits.
    printf("Raw bits interpreted as integer: %d\n", num.i);
    return 0;
}
