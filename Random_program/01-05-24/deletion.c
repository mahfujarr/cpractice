#include<stdio.h>
int main()
{
    int i, x, t, arr[100]={1,8,7,6,4,9,2,3,8,4};
    printf("Enter the index to delete: ");
    scanf("%d",&x);
    for (int i = x; i < 10; i++)
    {
        arr[i] = arr[i+1];
    }
    printf("The updated array is: ");
    for (i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }
}