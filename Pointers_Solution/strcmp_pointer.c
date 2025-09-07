#include <stdio.h>
int stringCompare(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
int main() {
    char str1[] = "apple";
    char str2[] = "apply";
    int result = stringCompare(str1, str2);
    if (result == 0) printf("Strings are equal.\n");
    else if (result < 0) printf("String 1 is less than String 2.\n");
    else printf("String 1 is greater than String 2.\n");
    return 0;
}
