#include <stdio.h>
int main()
{
    unsigned int n, l, r;
    scanf("%u%u%u", &n, &l, &r);
    unsigned int mask = ((1u << (r - l + 1)) - 1) << l;
    n ^= mask;
    printf("%u", n);
    return 0;
}