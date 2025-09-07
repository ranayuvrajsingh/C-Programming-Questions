#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birthday; // A Date structure is nested inside Person
};

int main() {
    struct Person p1 = {"Alice", {15, 5, 1990}};

    printf("Name: %s\n", p1.name);
    // Access nested members with a chain of dot operators
    printf("Birthday: %d/%d/%d\n", p1.birthday.day, p1.birthday.month, p1.birthday.year);

    return 0;
}
