#include<stdio.h>

main()
{
    float c,f;
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&c);
    f = ((9*c)/5)+32;
    printf("The temperature in Farenheit is: %.2f",f);
}