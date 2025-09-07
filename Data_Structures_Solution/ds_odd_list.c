#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

Node* getOddList(Node *head) {
    Node *odd_head = NULL;
    Node *odd_tail = NULL;
    Node *current = head;

    while (current != NULL) {
        if (current->data % 2 != 0) {
            Node* new_node = (Node*)malloc(sizeof(Node));
            new_node->data = current->data;
            new_node->next = NULL;
            if (odd_head == NULL) {
                odd_head = new_node;
                odd_tail = new_node;
            } else {
                odd_tail->next = new_node;
                odd_tail = new_node;
            }
        }
        current = current->next;
    }
    return odd_head;
}

// Helper functions
void addNode(Node** h, int d) { Node* n=(Node*)malloc(sizeof(Node)); n->data=d; n->next=*h; *h=n; }
void printList(Node *n) { while(n) { printf("%d ", n->data); n=n->next; } printf("\n"); }

int main() {
    Node *head = NULL;
    addNode(&head, 7); addNode(&head, 6); addNode(&head, 5); addNode(&head, 4);
    addNode(&head, 3); addNode(&head, 2); addNode(&head, 1);
    
    printf("Original list: "); printList(head);
    Node *odd_list = getOddList(head);
    printf("List with only odd numbers: "); printList(odd_list);
    return 0;
}
