#include<stdio.h>
int main()
{
    int i,j,n,x=1;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%d ",x);
            x+=2;
        }
        x=1;
        printf("\n");
    }
    
    return 0;
}