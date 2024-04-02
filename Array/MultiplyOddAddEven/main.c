#include<stdio.h>
int main()
{
    int arr[10]={1,4,7,9,8,6,4,5,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (i%2!=0)
        {
            arr[i]*=2;
        }
        else
        {
            arr[i]+=10;
        }
    }
    printf("The new array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}