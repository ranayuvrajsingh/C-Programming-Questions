#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

void recursivePrint(Node *head) {
    if (head == NULL) { printf("NULL\n"); return; }
    printf("%d -> ", head->data);
    recursivePrint(head->next);
}

int recursiveCount(Node *head) {
    if (head == NULL) return 0;
    return 1 + recursiveCount(head->next);
}

// Helper functions
void addNode(Node** h, int d) { Node* n=(Node*)malloc(sizeof(Node)); n->data=d; n->next=*h; *h=n; }

int main() {
    Node *head = NULL;
    addNode(&head, 30); addNode(&head, 20); addNode(&head, 10);
    printf("Recursive Print: ");
    recursivePrint(head);
    printf("Recursive Count: %d\n", recursiveCount(head));
    return 0;
}
