#include<stdio.h>

int main () {
    int a = 0, sum=0;
    for ( a = 1; a<=5; a=a+1)
    {
        printf("%d ", a);
        sum = sum+a;
    }
    printf("\n%d", sum);
    return 0;
}