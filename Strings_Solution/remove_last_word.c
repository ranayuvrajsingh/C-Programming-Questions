#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50];
    printf("Enter sentence: "); fgets(str, sizeof(str), stdin);
    printf("Enter word to remove: "); scanf("%s", word);
    char *last_pos=NULL, *pos=str;
    while((pos = strstr(pos, word)) != NULL) { last_pos = pos; pos++; }
    if(last_pos) {
        memmove(last_pos, last_pos + strlen(word), strlen(last_pos + strlen(word)) + 1);
        printf("Result: %s", str);
    } else printf("Not found.\n");
    return 0;
}
