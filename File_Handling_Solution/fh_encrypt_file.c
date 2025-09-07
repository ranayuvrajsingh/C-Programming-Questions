#include <stdio.h>
#define SHIFT_KEY 5
int main() {
    FILE *original = fopen("source.txt", "r");
    FILE *encrypted = fopen("encrypted.dat", "w");
    if (!original || !encrypted) return 1;
    char ch;
    while((ch = fgetc(original)) != EOF) fputc(ch + SHIFT_KEY, encrypted);
    fclose(original); fclose(encrypted);
    printf("File encrypted.\n");
    return 0;
}
