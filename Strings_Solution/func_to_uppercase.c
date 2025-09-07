#include <stdio.h>
#include <ctype.h>
void toUpper(char *str) { for(int i=0; str[i]; i++) str[i]=toupper(str[i]); }
int main() {
    char my_string[] = "test string";
    toUpper(my_string);
    printf("%s\n", my_string);
    return 0;
}
