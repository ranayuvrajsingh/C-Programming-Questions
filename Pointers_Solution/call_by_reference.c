#include <stdio.h>
// This function receives the address of the argument.
void modifyReference(int *ptr) {
    *ptr = *ptr + 10; // Modify the value at the address
    printf("Inside function, *ptr = %d\n", *ptr);
}
int main() {
    int num = 5;
    printf("Before function call, num = %d\n", num);
    modifyReference(&num); // Pass the address of num
    printf("After function call, num = %d (Changed)\n", num);
    return 0;
}
