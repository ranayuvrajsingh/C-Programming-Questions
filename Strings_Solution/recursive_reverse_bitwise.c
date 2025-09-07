#include <stdio.h>
#include <string.h>
void reverse(char *str, int s, int e){
    if(s >= e) return;
    str[s]^=str[e]; str[e]^=str[s]; str[s]^=str[e];
    reverse(str, s+1, e-1);
}
int main() {
    char str[] = "bitwise";
    reverse(str, 0, strlen(str)-1);
    printf("Reversed: %s\n", str);
    return 0;
}
