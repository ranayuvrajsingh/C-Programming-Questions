#include <stdio.h>
void substring(char *src, char *dest, int start, int len){
    strncpy(dest, src + start, len);
    dest[len] = '\0';
}
int main() {
    char main_str[] = "Programming";
    char sub[50];
    substring(main_str, sub, 3, 4); // "gram"
    printf("Substring: %s\n", sub);
    return 0;
}
