#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines (odd only): ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j<=n; j++)
        {
            if (j==i||j==n+1-i)
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