#include<stdio.h>

int main()
{
    int x=141,sum=0, rem, OgNum;
    //printf("Enter a number: ");
    //scanf("%d",&x);
    x=OgNum;
    while(x!=0)
    {
        rem = x % 10;
        sum = sum*10 + rem;
        x = x/10;
    }
    printf("%d",sum);

    /*if(OgNum==sum)
    {
        printf("Palindrome.");
    }
    else
    {
        printf("Not palindrome.");
    }*/
}
