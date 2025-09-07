#include <stdio.h>
void findFactorial(int num, unsigned long long *result) {
    *result = 1;
    for (int i = 1; i <= num; i++) {
        *result *= i;
    }
}
int main() {
    int n = 15;
    unsigned long long fact;
    findFactorial(n, &fact);
    printf("Factorial of %d is %llu\n", n, fact);
    return 0;
}
