#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 7; j++)
        {
            if (i==0||j==3||
                i==1&&j==1||
                i==2&&j==2||
                i==2&&j==4||
                i==1&&j==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }   
        }
        printf("\n");
    }
}