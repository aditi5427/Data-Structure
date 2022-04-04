#include <stdio.h>
 void printArray(int *a, int n)
 {
     for(int i = 0; i < n; i++)
     {
          printf("%d \n", a[i]);
     }
    printf("\n");
 }

int main()
{
    int a[] = {2,11 ,5, 7, 19, 12 };
    int n = 6;

    printArray(a, n);
    return 0;
}