#include <stdio.h>
#include <string.h>
int main() {
    // Same as max_char_in_string
    char str[200];
    int freq[256] = {0}, max_freq = 0;
    char max_char;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; str[i]; i++) freq[(unsigned char)str[i]]++;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = (char)i;
        }
    }
    printf("Highest frequency char is '%c'\n", max_char);
    return 0;
}
