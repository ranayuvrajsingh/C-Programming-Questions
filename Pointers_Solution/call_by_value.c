#include <stdio.h>
// This function receives a copy of the argument's value.
void modifyValue(int x) {
    x = x + 10;
    printf("Inside function, x = %d\n", x);
}
int main() {
    int num = 5;
    printf("Before function call, num = %d\n", num);
    modifyValue(num); // Pass the value of num
    printf("After function call, num = %d (Unchanged)\n", num);
    return 0;
}
