#include <stdio.h>
#include <string.h>
int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    int n = strlen(s);
    int max_len = 1, start = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int len = j - i + 1, is_palindrome = 1;
            for (int k = 0; k < len / 2; k++) {
                if (s[i+k] != s[j-k]) is_palindrome = 0;
            }
            if (is_palindrome && len > max_len) {
                max_len = len;
                start = i;
            }
        }
    }
    printf("Longest palindrome: ");
    for (int i = 0; i < max_len; i++) printf("%c", s[start+i]);
    printf("\n");
    return 0;
}
