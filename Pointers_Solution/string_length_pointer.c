#include <stdio.h>
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++; // Move the pointer to the next character
    }
    return length;
}
int main() {
    char my_string[] = "Hello World";
    printf("The length of the string is: %d\n", stringLength(my_string));
    return 0;
}
