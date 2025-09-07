#include <stdio.h>
struct Date { int day; int month; int year; };
int isValidDate(struct Date d) {
    if (d.year < 0 || d.month < 1 || d.month > 12 || d.day < 1) return 0;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Leap year check
    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
        daysInMonth[2] = 29;
    }
    if (d.day > daysInMonth[d.month]) return 0;
    return 1;
}
int main() {
    struct Date d1 = {29, 2, 2023}; // Invalid
    struct Date d2 = {29, 2, 2024}; // Valid
    printf("Date %d/%d/%d is %s\n", d1.day, d1.month, d1.year, isValidDate(d1) ? "valid" : "invalid");
    printf("Date %d/%d/%d is %s\n", d2.day, d2.month, d2.year, isValidDate(d2) ? "valid" : "invalid");
    return 0;
}
