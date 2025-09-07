#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50];
    int count = 0;
    printf("Enter sentence: "); fgets(str, sizeof(str), stdin);
    printf("Enter word to count: "); scanf("%s", word);
    char *pos = str;
    while((pos = strstr(pos, word)) != NULL) {
        count++;
        pos++;
    }
    printf("'%s' appears %d times.\n", word, count);
    return 0;
}
