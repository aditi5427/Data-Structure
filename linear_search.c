#include <stdio.h>
int linearSearch(int a[], int n , int key)
{
    for(int i = 0; i < n; i++)
    {
        if(key == a[i] )
    {
        return 1;
    } 
    return 0;
    }
    
}
int main()
{
    int a[] = {2, 4,5 ,6, 8,20 ,10 ,9, 22, 12};
    int n = 10;
    
    int key;
    
    int search = linearSearch(a, 18, key); 
    
    if(search)
    {
        printf("key is present \n");
    }
    else
    {
        printf("key is not present \n");
    }

    return 0; 
}