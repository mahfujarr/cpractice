#include<stdio.h>
int main()
{
    int x, y, a, s, m, r;
    float d;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    a = x+y;    //Adds Two numbers
    s = x-y;   //Subtracts two numbers
    m = x*y;
    d = (float)x/y;
    r = x%y;
    printf("\nAddition : %d",a);
    printf("\nSubtraction : %d",s);
    printf("\nMultiplication : %d",m);
    printf("\nDivision : %.1f",d);
    printf("\nRemainder : %d",r);
}