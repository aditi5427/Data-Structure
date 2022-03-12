#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

int main()
{
    // Constructing the new node
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct Node *p1;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct Node *p2;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->left = NULL;
    p2->right = NULL;

    //  Linking p to left(p1) and right(p2)
    p->left = p1;
    p->right = p2;

    return 0;
}