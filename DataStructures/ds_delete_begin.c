/*
ds_delete_begin.c
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createNode(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct node *deleteStart(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        return NULL;
    }

    head = head->next;
    printf("Deleted Element %d  \n", temp->data);
    free(temp);
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf(" -> %d ", temp->data);
        temp = temp->next;
    }
    printf(" -> NULL\n");
}

int main()
{
    // Write your code here

    struct node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);

        newNode = createNode(value);

        if (head == NULL)
        {
            head = newNode; // first node
            temp = head;
        }
        else
        {
            temp->next = newNode; // link new node
            temp = temp->next;
        }
    }

    // Display the linked list
    printf("\nLinked List: ");
    display(head);

    printf("\nAfter Delete Linked List: ");
    head = deleteStart(head);
    display(head);

    return 0;
}

