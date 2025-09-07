#include <stdio.h>
struct Date { int day; int month; int year; };
int isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main() {
    struct Date d = {1, 1, 2024};
    if (isLeap(d.year)) {
        printf("%d is a leap year.\n", d.year);
    } else {
        printf("%d is not a leap year.\n", d.year);
    }
    return 0;
}
