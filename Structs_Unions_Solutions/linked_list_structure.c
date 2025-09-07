#include <stdio.h>
#include <stdlib.h>
// Self-referential structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    if(!head) return 1;

    head->data = 10;
    head->next = NULL; // This is the only node for now
    printf("A linked list node is defined.\n");
    printf("Head node data: %d\n", head->data);
    free(head);
    return 0;
}
