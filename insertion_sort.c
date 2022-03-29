#include <stdio.h>

void printArray(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        
    } printf("\n");
}

void InsertionSort(int *A, int n)
{
    int temp, j;

    for(int  i = 1; i <= n-1; i++)
    {
        temp = A[i];
         j = i - 1;
        while(j >= 0 && A[j] > temp)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
}


int main()
{
    int A[] = {2, 8, 1,7,3, 9};
    int n = 6;

    printArray(A, n);
    InsertionSort(A, n);
    printArray(A, n);

    return 0;
}