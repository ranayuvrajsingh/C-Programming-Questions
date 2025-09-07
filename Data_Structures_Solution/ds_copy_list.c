#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

Node* copyList(Node *orig_head) {
    if (orig_head == NULL) return NULL;
    Node *new_head = (Node*)malloc(sizeof(Node));
    new_head->data = orig_head->data;
    
    Node *orig_curr = orig_head->next;
    Node *new_curr = new_head;

    while (orig_curr != NULL) {
        new_curr->next = (Node*)malloc(sizeof(Node));
        new_curr = new_curr->next;
        new_curr->data = orig_curr->data;
        orig_curr = orig_curr->next;
    }
    new_curr->next = NULL;
    return new_head;
}

// Helper functions
void addNode(Node** h, int d) { Node* n=(Node*)malloc(sizeof(Node)); n->data=d; n->next=*h; *h=n; }
void printList(Node *n) { while(n) { printf("%d ", n->data); n=n->next; } printf("\n"); }

int main() {
    Node *list1 = NULL;
    addNode(&list1, 30); addNode(&list1, 20); addNode(&list1, 10);
    printf("Original list: "); printList(list1);

    Node *list2 = copyList(list1);
    printf("Copied list: "); printList(list2);

    return 0;
}
