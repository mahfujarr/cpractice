#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for ( i = 1; i <= 5; i++)
    {
        char c = 'A';
        for ( j = 1; j <= i; j++)
        {
            if (i%2==0)
            {
                printf("%d ",j);
            }
            else
            {
            printf("%c ",c);
            c++;
            }
        }
        printf("\n");
    }
    
    return 0;
}