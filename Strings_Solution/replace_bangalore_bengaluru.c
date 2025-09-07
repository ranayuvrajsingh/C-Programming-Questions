#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str[] = "Bangalore is the capital of Karnataka. I live in Bangalore.";
    char *find = "Bangalore";
    char *replace = "Bengaluru";
    char *result = malloc(strlen(str) * 2); // Assume worst case
    char *p = str;
    char *res_p = result;
    while(*p) {
        if(strstr(p, find) == p) {
            strcpy(res_p, replace);
            p += strlen(find);
            res_p += strlen(replace);
        } else {
            *res_p++ = *p++;
        }
    }
    *res_p = '\0';
    printf("Result: %s\n", result);
    free(result);
    return 0;
}
