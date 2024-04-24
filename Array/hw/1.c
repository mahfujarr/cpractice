#include<stdio.h>
int main()
{
    float arr[3][5]={{46,32,70,75,68},{48,83,37,55,62},{62,67,81,90,27}};
    float result[5];
    for (int i = 0; i < 5; i++)
    {
        result[i] = arr[0][i]*0.25 + arr[1][i]*0.25 + arr[2][i]*0.50;
    }
    printf("The array  is:  ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f    ",result[i]);
    }
}