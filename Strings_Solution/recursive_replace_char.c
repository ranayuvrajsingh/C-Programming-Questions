#include <stdio.h>
void replace(char *s, char find, char repl){
    if(*s == '\0') return;
    if(*s == find) *s = repl;
    replace(s+1, find, repl);
}
int main() {
    char str[] = "banana";
    replace(str, 'a', 'o');
    printf("Result: %s\n", str);
    return 0;
}
