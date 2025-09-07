#include <stdio.h>
void append_file(FILE *dest, const char *src_name) {
    FILE *src = fopen(src_name, "r");
    if (!src) return;
    char ch;
    while((ch = fgetc(src)) != EOF) fputc(ch, dest);
    fclose(src);
}
int main() {
    FILE *f;
    f = fopen("file1.txt","w"); if(f){fputs("File1 ",f);fclose(f);}
    f = fopen("file2.txt","w"); if(f){fputs("File2 ",f);fclose(f);}
    f = fopen("file3.txt","w"); if(f){fputs("File3",f);fclose(f);}
    
    const char *files_to_merge[] = {"file1.txt", "file2.txt", "file3.txt"};
    int num_files = 3;
    
    FILE *merged = fopen("multi_merged.txt", "w");
    if(!merged) return 1;
    
    for(int i=0; i<num_files; i++) {
        append_file(merged, files_to_merge[i]);
    }
    
    fclose(merged);
    printf("Multiple files merged.\n");
    return 0;
}
