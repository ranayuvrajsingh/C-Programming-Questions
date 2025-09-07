#include <stdio.h>
#include <string.h>
int main() {
    // Same as last_word_occurrence
    char str[]="one two one three"; char word[]="one";
    char *last=NULL,*p=str;
    while((p=strstr(p,word))!=NULL){last=p;p++;}
    if(last) printf("Last found at index %ld\n", last-str);
    return 0;
}
