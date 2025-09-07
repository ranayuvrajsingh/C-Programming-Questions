#include <stdio.h>
#include <string.h>
int is_vowel(char c) {
    return strchr("aeiouAEIOU", c) != NULL;
}
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        if (!is_vowel(str[i])) i++;
        else if (!is_vowel(str[j])) j--;
        else {
            char t = str[i]; str[i] = str[j]; str[j] = t;
            i++; j--;
        }
    }
    printf("Result: %s\n", str);
    return 0;
}
