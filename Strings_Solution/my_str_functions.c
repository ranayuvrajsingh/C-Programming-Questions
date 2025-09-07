#include <stdio.h>
int my_strlen(const char*s){int l=0;while(s[l])l++;return l;}
void my_strcpy(char*d,const char*s){int i=0;while((d[i]=s[i]))i++;}
int main() {
    char text[]="hello";
    char copy[10];
    printf("Length: %d\n", my_strlen(text));
    my_strcpy(copy, text);
    printf("Copy: %s\n", copy);
    return 0;
}
