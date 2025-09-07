#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "programming"; char s2[] = "gaming";
    char res[50]; int k=0;
    for(int i=0; s1[i]; i++) {
        if(strchr(s2, s1[i]) == NULL) {
            res[k++] = s1[i];
        }
    }
    res[k] = '\0';
    printf("Result: %s\n", res);
    return 0;
}
