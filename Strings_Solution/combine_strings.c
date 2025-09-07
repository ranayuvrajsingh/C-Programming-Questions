#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = 0;
    strcat(s1, s2);
    printf("Combined: %s", s1);
    return 0;
}
