// * * * * * 
// * * *   *
// *   *   *
// *   * * *
// * * * * *

#include<stdio.h>
int main()
{
    int i,j;
    for( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5 ; j++)
        {
            if (i==0||i==4||j==0||j==4||i==j||j==2)
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