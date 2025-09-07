#include <stdio.h>
int main()
{
    char s[1024];
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (int i = 0; s[i] && s[i] != '\n'; i++)
        printf("%d ", (unsigned char)s[i]);
    printf("\n");
    return 0;
}
