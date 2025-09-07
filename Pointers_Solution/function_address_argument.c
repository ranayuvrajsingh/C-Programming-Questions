#include <stdio.h>
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

// This function takes a function pointer as an argument
void executeOperation(int x, int y, int (*operation)(int, int)) {
    int result = operation(x, y);
    printf("Result of operation: %d\n", result);
}
int main() {
    printf("Passing 'add' function:\n");
    executeOperation(10, 5, add); // Pass the 'add' function
    printf("Passing 'subtract' function:\n");
    executeOperation(10, 5, subtract); // Pass the 'subtract' function
    return 0;
}
