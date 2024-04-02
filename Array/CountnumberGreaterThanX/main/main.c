#include<stdio.h>
int main()
{
    int arr[10]={1,4,7,9,8,6,4,5,2,0};
    int n=sizeof(arr)/sizeof(arr[0]),count=0,x=7;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>x)
        {
            count+=1;
            printf("%d ",arr[i]);
        }
    }
    printf("The new array is: ");
    // for (int i = 0; i < n; i++)
    // {
        printf("%d ",count);
    // }
    return 0;
}