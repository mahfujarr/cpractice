#include<stdio.h>
#define row 5
#define col 5
#define rc (row-2)*(col-2)
int main()
{
    int result[rc];
    int arr[row][col]={{1, 0, 2, 1, 3},
                       {2, 0, 6, 2, 5},
                       {1, 7, 2, 9, 0},
                       {3, 2, 4, 5, 1},
                       {3, 0, 1, 0, 5}};
    for (int i = 0; i < row-2; i++)
    {
        for (int j = i; j < col-2; j++)
        {
            result[j] = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                                 arr[i+1][j+1] +
                     arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
        }
    }
    printf("All the sum of hour glasses are: ");
    for (int i = 0; i < rc; i++)
    {
        printf("%d ",result[i]);
    }
    for (int i = 0; i < rc; i++)
    {
        if (result[0] < result[i])
        {
            result[0] = result[i];
        }
    }
    printf("\nMaximum sum is: %d", result[0]);
}