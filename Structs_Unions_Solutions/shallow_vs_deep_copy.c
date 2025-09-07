#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char *name; // A pointer to a name string
} Student;

int main() {
    Student s1;
    s1.id = 101;
    s1.name = (char*)malloc(50 * sizeof(char));
    strcpy(s1.name, "Alice");

    // Shallow Copy: Only the pointer is copied, not the data it points to.
    Student s2 = s1;

    // Deep Copy: Allocate new memory and copy the data.
    Student s3;
    s3.id = s1.id;
    s3.name = (char*)malloc(50 * sizeof(char));
    strcpy(s3.name, s1.name);

    printf("Original s1: ID=%d, Name=%s\n", s1.id, s1.name);

    // Modify the name in the shallow copy. It affects the original.
    strcpy(s2.name, "Bob");
    printf("After modifying shallow copy s2, s1's name is now: %s (changed!)\n", s1.name);

    // Modify the name in the deep copy. It does NOT affect the original.
    strcpy(s3.name, "Charlie");
    printf("After modifying deep copy s3, s1's name is still: %s (unchanged)\n", s1.name);

    free(s1.name); // s1.name and s2.name point to the same memory
    free(s3.name);
    return 0;
}
