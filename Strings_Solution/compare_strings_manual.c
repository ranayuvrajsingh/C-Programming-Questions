#include <stdio.h>
int main() {
    char s1[100], s2[100];
    int i = 0;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    while (s1[i] == s2[i] && s1[i] != '\0') i++;
    if (s1[i] > s2[i]) printf("String 1 is greater.\n");
    else if (s1[i] < s2[i]) printf("String 2 is greater.\n");
    else printf("Strings are equal.\n");
    return 0;
}
