#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    printf("Enter string 1: "); scanf("%s", s1);
    printf("Enter string 2: "); scanf("%s", s2);
    int res = strcmp(s1, s2);
    if (res == 0) printf("Equal\n");
    else if (res < 0) printf("s1 < s2\n");
    else printf("s1 > s2\n");
    return 0;
}
