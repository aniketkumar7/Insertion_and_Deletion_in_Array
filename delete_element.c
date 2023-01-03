#include<stdio.h>
int main()
{
    int arr[100], i, n, pos;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position from where you want to delete the element : ");
    scanf("%d", &pos);
    for(i=pos-1; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n = n-1;
    printf("Resultant array is : ");
    for(i=0; i<n; i++)
    {
        printf(" %d\t", arr[i]);
    }
    return 0;

}