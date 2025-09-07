#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;

Node* getEvenList(Node *head) {
    Node *even_head = NULL;
    Node *even_tail = NULL;
    Node *current = head;

    while (current != NULL) {
        if (current->data % 2 == 0) {
            Node* new_node = (Node*)malloc(sizeof(Node));
            new_node->data = current->data;
            new_node->next = NULL;
            if (even_head == NULL) {
                even_head = new_node;
                even_tail = new_node;
            } else {
                even_tail->next = new_node;
                even_tail = new_node;
            }
        }
        current = current->next;
    }
    return even_head;
}

// Helper functions
void addNode(Node** h, int d) { Node* n=(Node*)malloc(sizeof(Node)); n->data=d; n->next=*h; *h=n; }
void printList(Node *n) { while(n) { printf("%d ", n->data); n=n->next; } printf("\n"); }

int main() {
    Node *head = NULL;
    addNode(&head, 7); addNode(&head, 6); addNode(&head, 5); addNode(&head, 4);
    addNode(&head, 3); addNode(&head, 2); addNode(&head, 1);
    
    printf("Original list: "); printList(head);
    Node *even_list = getEvenList(head);
    printf("List with only even numbers: "); printList(even_list);
    return 0;
}
