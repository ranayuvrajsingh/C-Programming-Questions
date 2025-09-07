#include <stdio.h>
#include <string.h>
int main() {
    char str[200], stack[200];
    int top = -1;
    printf("Enter brackets: ");
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c == '(' || c == '{' || c == '[') stack[++top] = c;
        else if (top >= 0 && ((c==')'&&stack[top]=='(') || (c=='}'&&stack[top]=='{') || (c==']'&&stack[top]=='['))) top--;
        else { printf("Invalid\n"); return 0; }
    }
    if (top == -1) printf("Valid\n");
    else printf("Invalid\n");
    return 0;
}
