#include <stdio.h>
int main() {
    // Same as count_vowels_consonants
    char str[200];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]; i++){
        char ch = str[i];
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') vowels++;
            else consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
