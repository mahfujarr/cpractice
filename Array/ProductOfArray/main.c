#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5},product=1;
    for (int i = 0; i < 5; i++)
    {
        product*=arr[i];
    }
    printf("Product: %d",product);
    
    return 0;
}