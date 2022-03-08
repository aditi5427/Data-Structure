#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; //--here data type is struct Node--
};

// Traversal in Linked list:
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Inserting at beginning:
struct Node *insertionAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    return ptr;
};

// Insertion at between
struct Node *insertionAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
};

// insertion at end:
struct Node *insertionAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
};

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocated memmory in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link head to second
    head->data = 33;
    head->next = second;

    // link second to third
    second->data = 67;
    second->next = third;

    // link third to fourth
    third->data = 89;
    third->next = fourth;

    // link fourth at end
    fourth->data = 99;
    fourth->next = NULL;

    // calling function
    printf("traversal in linked list \n");
    linkedListTraversal(head);

    printf("\n Insertion in linked list at beginning \n");
    head = insertionAtFirst(head, 25);
    linkedListTraversal(head);

    printf("\n Insertion in linked list at index \n");
    head = insertionAtIndex(head, 567, 2);
    linkedListTraversal(head);

    printf("\n Insertion in linked list at end \n");
    head = insertionAtEnd(head, 20);
    linkedListTraversal(head);

    return 0;
}
