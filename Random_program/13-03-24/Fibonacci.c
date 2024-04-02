#include<stdio.h>
int main()
{
    int x,n1=0,n2=1,n3;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("The series is : %d %d ",n1,n2);
    n3 = n1 + n2;

    while(n3<=x)
    {
        printf("%d ",n3); 
        n1=n2;
        n2=n3;
        n3 = n1 + n2;
    }
}