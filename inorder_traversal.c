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

void inOrder(struct Node *root)
{
    if(root != NULL)
    {
        // inOrder ( left root right)

        inOrder(root->left);           //Left
        printf("%d", root->data);     //Root
        inOrder(root->right);        //Right
    }
}

int main()
{
    struct Node *p = createNode(7);
    struct Node *p1 = createNode(4);
    struct Node *p2 = createNode(9);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("\n");
    inOrder(p);

    return 0;

   
}