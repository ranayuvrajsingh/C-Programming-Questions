#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50];
    printf("Enter sentence: "); fgets(str, sizeof(str), stdin);
    printf("Enter word to find: "); scanf("%s", word);
    char *pos = strstr(str, word);
    if(pos) printf("Word found at index %ld\n", pos - str);
    else printf("Not found.\n");
    return 0;
}
