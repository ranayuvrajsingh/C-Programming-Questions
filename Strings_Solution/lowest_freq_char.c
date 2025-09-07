#include <stdio.h>
#include <string.h>
#include <limits.h>
int main() {
    char str[200];
    int freq[256] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i=0; str[i]; i++) freq[(unsigned char)str[i]]++;
    int min_freq = INT_MAX;
    char min_char = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && freq[i] < min_freq) {
            min_freq = freq[i];
            min_char = (char)i;
        }
    }
    if (min_char) printf("Lowest frequency char is '%c'\n", min_char);
    return 0;
}
