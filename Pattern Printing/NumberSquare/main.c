#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",k);
            k++;
        }
        k=1;
        printf("\n");
    }
    
    return 0;
}