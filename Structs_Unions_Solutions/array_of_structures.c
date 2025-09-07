#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    // Declare an array that can hold 3 Student structures
    struct Student students[3];

    // Initialize the array
    students[0] = (struct Student){101, "Alice"};
    students[1] = (struct Student){102, "Bob"};
    students[2] = (struct Student){103, "Charlie"};

    printf("Student Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s\n", students[i].id, students[i].name);
    }
    return 0;
}
