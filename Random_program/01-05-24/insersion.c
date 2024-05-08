#include<stdio.h>
int main()
{
    int i, x, t, arr[100]={1,8,7,6,4,9,2,3,8,4};
    printf("Enter the index to insert: ");
    scanf("%d",&x);
    printf("Enter the value to insert: ");
    scanf("%d", &t);

    for (int i = 10; i >= x; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[x] = t;

    printf("The updated array is: ");
    for (i = 0; i <= 10; i++)
    {
        printf("%d ",arr[i]);
    }
}