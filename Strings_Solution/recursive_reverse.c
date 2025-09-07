#include <stdio.h>
#include <string.h>
void reverse(char *s, int b, int e){
    if(b>=e)return;
    char t=s[b];s[b]=s[e];s[e]=t;
    reverse(s, b+1, e-1);
}
int main() {
    char str[] = "recursion";
    reverse(str, 0, strlen(str)-1);
    printf("Reversed: %s\n", str);
    return 0;
}
