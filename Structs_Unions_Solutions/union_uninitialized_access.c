#include <stdio.h>

union Data {
    int i;
    float f;
    char str[8];
};

int main() {
    union Data data;
    data.i = 10;

    printf("Assigned to i: data.i = %d\n", data.i);
    // Accessing a member that was not the last one written to results in
    // reading the memory in a different format. The value is not predictable.
    printf("Reading f (uninitialized): data.f = %f (Undefined Behavior!)\n", data.f);

    return 0;
}
