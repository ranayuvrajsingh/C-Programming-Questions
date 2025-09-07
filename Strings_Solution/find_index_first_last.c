#include <stdio.h>
int main() {
    char str[]="banana", ch='a';
    int first=-1, last=-1;
    for(int i=0; str[i]; i++){
        if(str[i]==ch){
            if(first==-1) first=i;
            last=i;
        }
    }
    printf("First: %d, Last: %d\n", first, last);
    return 0;
}
