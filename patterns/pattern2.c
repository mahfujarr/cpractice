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
            if (i+j>=x-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
        
    }
}