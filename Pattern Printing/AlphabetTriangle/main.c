#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for ( i = 0; i < 5; i++)
    {
        char c = 'A';
        for ( j = 0; j <= i; j++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    
    return 0;
}