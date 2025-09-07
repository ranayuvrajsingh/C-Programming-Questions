#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50];
    printf("Enter sentence: "); fgets(str, sizeof(str), stdin);
    printf("Enter word to remove: "); scanf("%s", word);
    char *pos = strstr(str, word);
    if(pos) {
        memmove(pos, pos + strlen(word), strlen(pos + strlen(word)) + 1);
        // This might leave extra spaces, which trim_extra_spaces can fix
        printf("Result: %s", str);
    } else printf("Not found.\n");
    return 0;
}
