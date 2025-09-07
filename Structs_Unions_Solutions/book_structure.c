#include <stdio.h>
#include <string.h>
struct Book {
    char title[100];
    char author[50];
    int pages;
};
int main() {
    struct Book b1;
    strcpy(b1.title, "The C Programming Language");
    strcpy(b1.author, "Kernighan & Ritchie");
    b1.pages = 272;

    printf("Book: %s\nAuthor: %s\nPages: %d\n", b1.title, b1.author, b1.pages);
    return 0;
}
