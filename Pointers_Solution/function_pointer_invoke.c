#include <stdio.h>
void sayHello() {
    printf("Hello, World!\n");
}
int main() {
    // Declare a function pointer that can point to a function
    // with no arguments and a void return type.
    void (*func_ptr)();

    // Assign the address of the function to the pointer
    func_ptr = &sayHello;

    // Invoke the function using the pointer
    printf("Invoking function via pointer...\n");
    (*func_ptr)();
    return 0;
}
