#include<stdio.h>
int main()
{
    int arr[5]={3,5,1,2,4},max=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    printf("MAXIMUM VALUE: %d",max);
    return 0;
}