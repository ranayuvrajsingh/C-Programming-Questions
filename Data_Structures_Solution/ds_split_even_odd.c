#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

void splitList(Node *head, Node **even_list, Node **odd_list) {
    Node *current = head;
    *even_list = NULL;
    *odd_list = NULL;
    
    while(current != NULL) {
        if (current->data % 2 == 0) {
            Node* n=(Node*)malloc(sizeof(Node)); n->data=current->data; n->next=*even_list; *even_list=n;
        } else {
            Node* n=(Node*)malloc(sizeof(Node)); n->data=current->data; n->next=*odd_list; *odd_list=n;
        }
        current = current->next;
    }
}

// Helper functions
void addNode(Node** h, int d) { Node* n=(Node*)malloc(sizeof(Node)); n->data=d; n->next=*h; *h=n; }
void printList(Node *n) { while(n) { printf("%d ", n->data); n=n->next; } printf("\n"); }

int main() {
    Node *head = NULL;
    Node *evens = NULL, *odds = NULL;
    addNode(&head, 6); addNode(&head, 5); addNode(&head, 4);
    addNode(&head, 3); addNode(&head, 2); addNode(&head, 1);
    
    printf("Original List: "); printList(head);
    splitList(head, &evens, &odds);
    printf("Even List: "); printList(evens);
    printf("Odd List: "); printList(odds);
    
    return 0;
}
