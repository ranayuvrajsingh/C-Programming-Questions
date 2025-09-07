#include <stdio.h>
#include <string.h>
void reverse(char* b, char* e) { while(b<e) { char t=*b;*b++=*e;*e--=t; } }
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    char *word_begin = str;
    char *temp = str;
    while (*temp) {
        if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
        temp++;
    }
    reverse(word_begin, temp - 1); // reverse last word
    reverse(str, temp - 1); // reverse whole string
    printf("Reversed words: %s\n", str);
    return 0;
}
