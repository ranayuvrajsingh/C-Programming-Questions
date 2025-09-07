#include <stdio.h>
struct Complex { float real; float imag; };
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main() {
    struct Complex n1 = {2.5, 3.1};
    struct Complex n2 = {1.5, 2.4};
    struct Complex sum = addComplex(n1, n2);
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}
