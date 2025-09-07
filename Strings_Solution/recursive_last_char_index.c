#include <stdio.h>
#include <string.h>
int find_last(char *s, char c, int i){
    if(i<0)return -1;
    if(s[i]==c)return i;
    return find_last(s,c,i-1);
}
int main() {
    char str[]="hello";
    printf("Index of 'l': %d\n", find_last(str, 'l', strlen(str)-1));
    return 0;
}
