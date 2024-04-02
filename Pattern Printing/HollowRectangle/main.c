#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of columns: ");
    scanf("%d",&m);
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i==0||i==n-1||j==0||j==m-1)
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