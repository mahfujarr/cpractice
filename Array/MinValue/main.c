#include<stdio.h>
int main()
{
    int arr[5]={3,5,1,2,4},min=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    printf("MINIMUM VALUE: %d",min);
    return 0;
}