#include <stdio.h>
#include <stdlib.h>
int main() {
    char s1[100], s2[100];
    printf("Enter two numbers as strings: ");
    scanf("%s %s", s1, s2);
    long long n1 = atoll(s1), n2 = atoll(s2);
    printf("Product = %lld\n", n1 * n2);
    return 0;
}
