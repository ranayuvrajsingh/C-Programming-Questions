#include <stdio.h>
int main() {
    char str[200];
    int freq[256] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        if(str[i] != '\n') freq[(unsigned char)str[i]]++;
    }
    int max_freq = 0;
    char max_char;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = (char)i;
        }
    }
    printf("Max occurring char is '%c' (%d times)\n", max_char, max_freq);
    return 0;
}
