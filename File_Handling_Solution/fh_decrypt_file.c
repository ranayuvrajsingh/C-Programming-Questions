#include <stdio.h>
#define SHIFT_KEY 5
int main() {
    FILE *encrypted = fopen("encrypted.dat", "r");
    FILE *decrypted = fopen("decrypted.txt", "w");
    if (!encrypted || !decrypted) return 1;
    char ch;
    while((ch = fgetc(encrypted)) != EOF) fputc(ch - SHIFT_KEY, decrypted);
    fclose(encrypted); fclose(decrypted);
    printf("File decrypted.\n");
    return 0;
}
