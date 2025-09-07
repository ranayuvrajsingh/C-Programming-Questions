#include <stdio.h>
#include <string.h>
int to_int(char *s, int n){
    if(n==0)return 0;
    return (s[n-1]-'0') + 10*to_int(s, n-1);
}
int main() {
    char str[]="12345";
    printf("Integer value: %d\n", to_int(str, strlen(str)));
    return 0;
}
