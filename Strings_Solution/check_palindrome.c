#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    int is_palindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int i = 0, j = strlen(str) - 1;
    while(i < j) {
        if (tolower(str[i++]) != tolower(str[j--])) {
            is_palindrome = 0;
            break;
        }
    }
    if(is_palindrome) printf("It is a palindrome.\n");
    else printf("It is not a palindrome.\n");
    return 0;
}
