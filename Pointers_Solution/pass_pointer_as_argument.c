#include <stdio.h>
// This function accepts a pointer as its argument.
void increment(int *p) {
    // It increments the value that the pointer is pointing to.
    (*p)++;
}
int main() {
    int num = 10;
    printf("Original value: %d\n", num);
    // We pass the address of 'num' to the function.
    increment(&num);
    printf("Value after calling increment: %d\n", num);
    return 0;
}
