#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    // char c='A';
    for ( i = 0; i < n; i++)
    {
        char c='A';
        for ( j = 0; j < n; j++)
        {
            printf("%c ",c);
            c+=1;
        }
        // c='A';
        printf("\n");
    }
    
    return 0;
}