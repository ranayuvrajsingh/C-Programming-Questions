#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isupper(ch)) printf("It is uppercase.\n");
    else printf("It is not uppercase.\n");
    return 0;
}
