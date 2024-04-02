#include<stdio.h>

int findMAX (int x, int y)
{
    return (x>y)? x : y;
}

int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    int max = findMAX(x,y);
    printf("%d", max);
}