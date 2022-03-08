#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1) // top = -1
    {
        // printf("stack's top is -1 or empty. \n");
        return 1;
    }
    else
    {
        // printf("stack's top is not -1. \n");
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    //--if top = size-1 of given array it's means stack is full--
    {
        // printf("stack is full. \n");
        return 1;
    }
    else
    {
        // printf("stack is not full. \n");
        return 0;
    }
}

void push(struct stack * ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow, cannot add %d in stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;;
    }
}

int pop(struct stack * ptr)
{
    if (isEmpty(ptr))
    {
        printf(" I have no value to pop out \n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;

        return val;
    }
}

int peek(struct stack * sp, int i)
{
    int arrayIndex = sp->top - i + 1;
    if (arrayIndex < 0)
    {
        printf("Not a valid position \n");
        return -1;
    }
    else
    {
        return sp->arr[arrayIndex];
    }
}

int stackTop(struct stack * sp)
{
    return sp->arr[sp->top];
}

int stackBottom(struct stack * sp)
{
    return sp->arr[0];
}

int main()
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully \n");
    printf("\n");
    printf(" before pushing: %d \n", isFull(sp));
    printf(" before pushing: %d \n", isEmpty(sp));

    push(sp, 3);
    push(sp, 2);
    push(sp, 9);
    push(sp, 7);
    push(sp, 6);
    push(sp, 5);
    push(sp, 4);
    push(sp, 1);

    printf(" after pushing: %d \n", isFull(sp));
    printf(" after pushing: %d \n", isEmpty(sp));

    printf("Popped out %d from stack\n", pop(sp));

    printf("The top most value of stack is %d \n ", stackTop(sp));
    printf("The bottom most value of stack is %d \n", stackBottom(sp));
    for(int j = 0; j < sp->top; j++)
    {
    printf("The value at %d index is %d \n", j, peek(sp, j) );
    
    }
    return 0;
}