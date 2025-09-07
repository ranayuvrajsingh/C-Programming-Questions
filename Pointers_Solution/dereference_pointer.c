#include <stdio.h>
int main() {
    int num = 25;
    int *ptr = &num;

    printf("Address stored in ptr: %p\n", (void*)ptr);
    // The * operator is the dereference operator.
    // It goes to the address stored in the pointer and gets the value.
    printf("Value at the address ptr is pointing to: %d\n", *ptr);

    // We can also change the value of 'num' through the pointer.
    *ptr = 50;
    printf("New value of num after changing via pointer: %d\n", num);
    return 0;
}
