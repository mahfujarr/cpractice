#include<stdio.h>
int main()
{
    int i,j,n=5;
    for ( i = 1; i <= n; i++)
    {
        char c = 'A';
        for ( j = 1; j <= n; j++)
        {
            if (i+j>=n+1)
            {
                printf("%c ",c);
                c++;
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