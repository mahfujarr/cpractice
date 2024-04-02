#include<stdio.h>
int main()
{
    int i,j,n=7;
    for ( i = 1; i <= (n-3); i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i+j>=(n-2)&&i+j<=(n+1))
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