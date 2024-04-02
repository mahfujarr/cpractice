#include<stdio.h>
#define PI 3.14

main()
{
    float r,a;
    printf("Enter the radius: ");
    scanf("%f",&r);
    a = PI*r*r;
    printf("The area of the circle is: %.2f",a);
}