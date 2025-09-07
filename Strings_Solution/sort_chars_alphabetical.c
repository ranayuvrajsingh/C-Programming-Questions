#include <stdio.h>
#include <string.h>
int main() {
    // Same as bubble_sort_string
    char str[] = "zyxw";
    int n=strlen(str);
    for(int i=0; i<n-1; i++) for(int j=0; j<n-i-1; j++)
        if(str[j]>str[j+1]){ char t=str[j];str[j]=str[j+1];str[j+1]=t; }
    printf("Sorted: %s\n", str);
    return 0;
}
