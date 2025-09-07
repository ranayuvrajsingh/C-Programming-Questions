#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter char to find: ");
    scanf(" %c", &ch);
    char *ptr = strrchr(str, ch);
    if(ptr) printf("Last occurrence at index %ld\n", ptr - str);
    else printf("Not found.\n");
    return 0;
}
