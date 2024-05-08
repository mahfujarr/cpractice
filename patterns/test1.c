#include<stdio.h>
int main()
{
    int x,i,j;
    printf("Enter the number of lines: ");
    scanf("%d",&x);
    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < x; j++)
        {
            if (i==0 || j==0 || i==x-1 || j==x-1 || i==j)
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
}