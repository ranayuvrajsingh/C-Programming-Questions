#include <stdio.h>
int main() {
    // Same as remove_extra_spaces
    char str[]="multiple   spaces";
    char res[100]; int i=0, j=0, sp=0;
    while(str[i]){
        if(str[i]!=' '){ res[j++]=str[i]; sp=0; }
        else if(!sp){ res[j++]=' '; sp=1; }
        i++;
    }
    res[j]=0; printf("Result: \"%s\"\n", res);
    return 0;
}
