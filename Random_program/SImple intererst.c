#include<stdio.h>

main()
{
    float p,r,t,a;
    printf("Enter the main amount: ");
    scanf("%f",&p);
    printf("Enter the time period: ");
    scanf("%f",&t);
    printf("Enter the interest rate: ");
    scanf("%f",&r);
    r=r/100;
    a=p*(1+r*t);
    printf("The amount with interest is: %.2f",a);
}