#include <stdio.h>
#include <stdlib.h>
struct Student { int id; char name[50]; };
int main() {
    struct Student *s_ptr;
    // Common Mistake: Allocating memory for a pointer, not the structure itself.
    // s_ptr = (struct Student*)malloc(sizeof(s_ptr)); // INCORRECT!
    
    // Correct way: Allocate memory for the size of the structure.
    s_ptr = (struct Student*)malloc(sizeof(struct Student));
    if(!s_ptr) return 1;

    s_ptr->id = 101;
    printf("Correctly allocated memory for a Student struct.\n");
    printf("Student ID: %d\n", s_ptr->id);
    
    free(s_ptr);
    return 0;
}
