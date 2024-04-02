#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines (odd only): ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (j==n/2||i==n/2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        
    }
    
    return 0;
}