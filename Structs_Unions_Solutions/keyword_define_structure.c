#include <stdio.h>

// 'struct' keyword is used to define a structure.
// 'Book' is the name (tag) of this structure.
struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    // 'book1' is a variable of type 'struct Book'.
    struct Book book1;
    printf("Structure for Book defined.\n");
    printf("Size of the Book structure: %zu bytes\n", sizeof(book1));
    return 0;
}
