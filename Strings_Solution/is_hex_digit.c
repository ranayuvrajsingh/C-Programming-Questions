#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isxdigit(ch)) printf("It is a hex digit.\n");
    else printf("It is not a hex digit.\n");
    return 0;
}
