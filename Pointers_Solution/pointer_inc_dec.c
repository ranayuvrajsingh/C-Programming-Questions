#include <stdio.h>
int main() {
    int numbers[] = {5, 10, 15, 20};
    int *p = numbers;

    printf("Initial value *p: %d\n", *p); // 5

    p++; // Increment pointer, now points to 10
    printf("After p++, *p is: %d\n", *p); // 10

    p++; // Increment pointer, now points to 15
    printf("After p++, *p is: %d\n", *p); // 15

    p--; // Decrement pointer, now points back to 10
    printf("After p--, *p is: %d\n", *p); // 10

    return 0;
}
