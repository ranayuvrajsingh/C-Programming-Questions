#include <stdio.h>
void stringConcat(char *dest, const char *src) {
    // Move dest pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }
    // Copy src to the end of dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    stringConcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
