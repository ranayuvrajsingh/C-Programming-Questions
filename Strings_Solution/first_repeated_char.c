#include <stdio.h>
int main() {
    char str[200];
    int freq[256] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] && str[i] != '\n'; i++) {
        unsigned char c = str[i];
        freq[c]++;
        if (freq[c] == 2) {
            printf("First repeated char: %c\n", c);
            return 0;
        }
    }
    printf("No repeated characters.\n");
    return 0;
}
