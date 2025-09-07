#include <stdio.h>
#include <ctype.h>
void countVowelsConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    while (*str != '\0') {
        char ch = tolower(*str);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++;
    }
}
int main() {
    char text[] = "Hello World!";
    int v, c;
    countVowelsConsonants(text, &v, &c);
    printf("String: '%s'\nVowels: %d, Consonants: %d\n", text, v, c);
    return 0;
}
