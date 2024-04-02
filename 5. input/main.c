#include<stdio.h>

int main() 
{
    L:
    int a,b,sum;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    sum = (a+b);
    printf("The sum is: %d", sum);
    goto L;
}