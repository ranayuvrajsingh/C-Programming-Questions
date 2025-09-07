#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_vowels(char *s, int i){
    if(s[i]=='\0')return 0;
    int is_vowel=strchr("aeiou",tolower(s[i]))!=NULL;
    return is_vowel + count_vowels(s, i+1);
}
int main() {
    char str[] = "hello world";
    printf("Vowels: %d\n", count_vowels(str, 0));
    return 0;
}
