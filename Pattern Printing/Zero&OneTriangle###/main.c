#include<stdio.h>
int main()
{
    int n=5,x;
    // printf("Enter the number of lines: ");
    // scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            x=1;
        }
        else
        {
            x=0;
        }     
        
        for (int j = 0; j <= i; j++)
        {
            if (i%2==0)
            {
                printf("%d ",x);
                if (x==0)
                {
                    x=1;
                }
                else
                {
                    x=0;
                }

            }
            else
            {
                printf("%d ",x);
                if (x==0)
                {
                    x=1;
                }
                else
                {
                    x=0;
                }
            }
            
            
        }
        printf("\n");
        
    }
    
    return 0;
}