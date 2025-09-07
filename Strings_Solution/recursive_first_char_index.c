#include <stdio.h>
int find_first(char *s, char c, int i){
    if(s[i]=='\0')return -1;
    if(s[i]==c)return i;
    return find_first(s,c,i+1);
}
int main() {
    char str[]="hello";
    printf("Index of 'l': %d\n", find_first(str, 'l', 0));
    return 0;
}
