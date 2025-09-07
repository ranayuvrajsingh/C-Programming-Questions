#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50];
    printf("Enter sentence: "); fgets(str, sizeof(str), stdin);
    printf("Enter word to find: "); scanf("%s", word);
    char *last_pos = NULL, *current_pos = str;
    while((current_pos = strstr(current_pos, word)) != NULL) {
        last_pos = current_pos;
        current_pos++;
    }
    if(last_pos) printf("Last occurrence at index %ld\n", last_pos - str);
    else printf("Not found.\n");
    return 0;
}
