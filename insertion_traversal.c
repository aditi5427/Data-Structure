#include <stdio.h>

void display(int a[], int n)
{
    // Traversal:-
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

    // Insertion:-
int indInsertion(int a[], int size, int element, int index, int capacity)
{
    if (size >= capacity)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            a[i + 1] = a[i];
        }
        a[index] = element;
        return 1;
    }
}

int main()
{
    int a[100] = {1, 2, 3, 4, 5};
    int size = 5, element = 6, index = 2;
    display(a, size);

    indInsertion(a, size, element, index, 100);
    size += 1;
    display(a, size);

    return 0;
}