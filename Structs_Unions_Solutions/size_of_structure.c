#include <stdio.h>

struct Employee {
    int id;       // 4 bytes
    char name[50]; // 50 bytes
    float salary; // 4 bytes
};

int main() {
    struct Employee emp;
    // The size of a structure is the sum of the sizes of its members,
    // plus any padding bytes added by the compiler for alignment.
    printf("Size of Employee structure: %zu bytes\n", sizeof(struct Employee));
    printf("Size of emp variable: %zu bytes\n", sizeof(emp));
    return 0;
}
