#include <stdio.h>
union Product {
    int id;
    char name[50];
    double price;
};
int main() {
    // The size of a union is the size of its largest member.
    // Here, name[50] is 50 bytes, which is larger than int (4) and double (8).
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of char[50]: %zu\n", sizeof(char[50]));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of Product union: %zu bytes\n", sizeof(union Product));
    return 0;
}
