#include <stdio.h>
int main()
{
    int arr[100], i, j, n, pos, value;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the elements of array are : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element : ");
    scanf("%d", &pos);
    printf("Enter the value which you want to insert : ");
    scanf("%d", &value);
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    n = n + 1;
    printf("The required array is : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d  ", arr[i]);
    }
    return 0;
}