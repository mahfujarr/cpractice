#include<stdio.h>
int main()
{
    int i,j,k=1,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for ( i = 1; i <= 5; i++)
    {
        // int k=1;
        for ( j = 1; j <= i; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    
    return 0;
}