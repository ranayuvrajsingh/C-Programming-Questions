#include <stdio.h>
int main() {
    // Same logic as count_alpha_digit_special, but manual checks
    char str[200];
    int alphas = 0, digits = 0, specials = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] && str[i] != '\n'; i++) {
        if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) alphas++;
        else if (str[i]>='0'&&str[i]<='9') digits++;
        else specials++;
    }
    printf("Alphas=%d, Digits=%d, Specials=%d\n", alphas, digits, specials);
    return 0;
}
