#include <stdio.h>

struct ExampleStruct {
    int a;
    char b;
};

union ExampleUnion {
    int a;
    char b;
};

int main() {
    // In a structure, each member has its own memory location.
    // The size is the sum of members' sizes (plus padding).
    printf("Size of structure: %zu bytes\n", sizeof(struct ExampleStruct));

    // In a union, all members share the same memory location.
    // The size is the size of the largest member.
    printf("Size of union: %zu bytes\n", sizeof(union ExampleUnion));

    union ExampleUnion u;
    u.a = 65; // Assign an integer value (ASCII for 'A')
    printf("\nUnion's integer 'a': %d\n", u.a);
    printf("Union's character 'b': %c\n", u.b); // Accessing 'b' reads from the same memory

    return 0;
}
