#include <stdio.h>
int main() {
    char str[200] = "word  with   extra   spaces";
    char result[200];
    int i=0, j=0, space_found=0;
    while(str[i]){
        if(str[i] != ' '){
            result[j++] = str[i];
            space_found = 0;
        } else if(!space_found){
            result[j++] = ' ';
            space_found = 1;
        }
        i++;
    }
    result[j] = '\0';
    printf("Result: \"%s\"\n", result);
    return 0;
}
