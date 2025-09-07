#include <stdio.h>
#include <time.h>
int main() {
    FILE *logfile = fopen("app.log", "a");
    if (!logfile) return 1;
    time_t t = time(NULL);
    char *time_str = ctime(&t);
    time_str[strlen(time_str)-1] = '\0'; // remove newline
    fprintf(logfile, "[%s] Event occurred.\n", time_str);
    fclose(logfile);
    printf("Log entry added.\n");
    return 0;
}
