#include <stdio.h>
int main() {
    FILE *file = fopen("multiline.txt", "w");
    if(!file) return 1;
    printf("Enter multiple lines (Ctrl+D on Unix or Ctrl+Z on Windows to end):\n");
    char ch;
    while((ch = getchar()) != EOF) {
        fputc(ch, file);
    }
    fclose(file);
    printf("\nData saved to multiline.txt\n");
    return 0;
}
