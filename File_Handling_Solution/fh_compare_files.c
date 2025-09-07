#include <stdio.h>
int main() {
    FILE *f;
    f=fopen("cmp1.txt","w");if(f){fputs("abc",f);fclose(f);}
    f=fopen("cmp2.txt","w");if(f){fputs("abc",f);fclose(f);}
    FILE *f1 = fopen("cmp1.txt", "r");
    FILE *f2 = fopen("cmp2.txt", "r");
    int ch1, ch2, diff = 0;
    while(1) {
        ch1 = fgetc(f1); ch2 = fgetc(f2);
        if (ch1 != ch2) { diff = 1; break; }
        if (ch1 == EOF) break;
    }
    if (diff) printf("Files differ.\n");
    else printf("Files are identical.\n");
    fclose(f1); fclose(f2);
    return 0;
}
