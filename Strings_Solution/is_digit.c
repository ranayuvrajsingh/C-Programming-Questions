#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isdigit(ch)) printf("It is a digit.\n");
    else printf("It is not a digit.\n");
    return 0;
}
