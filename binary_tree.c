#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n;
    n = (struct Node *) malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
};

int main()
{
    // Constructing node usong function
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(4);
    struct Node *p2 = createNode(6);

    p->left = p1;
    p->right = p2;

/*
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
*/
    return 0;
}