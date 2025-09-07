#include <stdio.h>
#include <string.h>
void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char my_string[] = "pointers";
    printf("Original: %s\n", my_string);
    reverseString(my_string);
    printf("Reversed: %s\n", my_string);
    return 0;
}
