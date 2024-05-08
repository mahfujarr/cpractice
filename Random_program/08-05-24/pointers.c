#include<stdio.h>
int main()
{
    int a = 21, b = 31;
    int *pA = &a;
    int *pB = &b;
    printf("Sum is %d", *pA + *pB);
    return 0;
}