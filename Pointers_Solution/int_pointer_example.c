#include <stdio.h>
int main() {
    int var = 99;
    int *p_var; // Declare a pointer to an integer

    p_var = &var; // Assign the address of 'var' to the pointer

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value stored in p_var: %p\n", (void*)p_var);
    printf("Value accessed via p_var: %d\n", *p_var);
    return 0;
}
