#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (islower(ch)) printf("It is lowercase.\n");
    else printf("It is not lowercase.\n");
    return 0;
}
