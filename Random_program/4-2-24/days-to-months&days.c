#include<stdio.h>
int main()
{
    int d,m;
    printf("Enter days: \n");
    scanf("%d",&d);
    m = d/30;
    d = d%30;
    printf("Months : %d \tDays: %d",m,d);
}