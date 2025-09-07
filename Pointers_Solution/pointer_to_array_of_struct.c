#include <stdio.h>
struct Student {
    int id;
    char name[50];
};
int main() {
    struct Student records[3] = {
        {101, "Alice"},
        {102, "Bob"},
        {103, "Charlie"}
    };
    struct Student *ptr = records; // Pointer to the first struct in the array
    printf("Student Records:\n");
    for (int i = 0; i < 3; i++) {
        // Access members using arrow operator with pointer arithmetic
        printf("ID: %d, Name: %s\n", (ptr + i)->id, (ptr + i)->name);
    }
    return 0;
}
