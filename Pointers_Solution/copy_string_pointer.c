#include <stdio.h>
void stringCopy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Append null terminator
}
int main() {
    char source[] = "Copy this!";
    char destination[50];
    stringCopy(destination, source);
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    return 0;
}
