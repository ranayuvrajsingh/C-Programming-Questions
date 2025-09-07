#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50];
    printf("Enter sentence: "); fgets(str, sizeof(str), stdin);
    printf("Enter word to find: "); scanf("%s", word);
    char *pos = str;
    printf("Found at indices: ");
    while((pos = strstr(pos, word)) != NULL) {
        printf("%ld ", pos - str);
        pos++;
    }
    printf("\n");
    return 0;
}
