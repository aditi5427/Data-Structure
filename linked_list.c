#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;

};

void linked_listTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d \n", ptr->data);
        ptr = ptr->next;
    }
    
}

int main()
{

struct Node *head;
struct Node *second;
struct Node *third;

// Allocated memory for nodes in head:
head = (struct Node *) malloc(sizeof(struct Node));
second = (struct Node *) malloc(sizeof(struct Node));
third = (struct Node *) malloc(sizeof(struct Node));

// Link first and second nodes:----
head->data = 55;
head->next = second;

// link second and third nodes:----
second->data = 77;
second->next = third;

// link third node at end:----
third->data = 111;
third->next = NULL;

linked_listTraversal(head);

return 0;


}