#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    // Same as count_word_occurrence
    char str[]="one two One TWO one"; char word[]="one";
    int count = 0;
    for(int i=0;str[i];i++)str[i]=tolower(str[i]);
    char *p = str;
    while((p=strstr(p,word))!=NULL){count++;p++;}
    printf("Count: %d\n", count);
    return 0;
}
