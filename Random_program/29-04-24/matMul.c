#include<stdio.h> 
 
int main() 
{ 
  int i, j, k, r1=3, c1=3, r2=3, c2=2, sum = 0; 
  int arr1[10][10] = {{1,2,3},{3,1,2},{2,3,1}}; 
  int arr2[10][10] = {{3,4},{1,4},{2,1}}; 
  int result[10][10]; 
 
  if (c1 != r2){ 
    printf("Cannot be multiplied."); 
  } 
  else 
  { 
    for (i = 0; i < r1; i++) { 
      for (j = 0; j < c2; j++) { 
        for (k = 0; k < r2; k++) { 
          sum = sum + arr1[i][k] * arr2[k][j]; 
        } 
        result[i][j] = sum; 
        sum = 0; 
      } 
    } 
    printf("The result is:\n"); 
    for (i = 0; i < r1; i++) { 
      for (j = 0; j < c2; j++){ 
        printf("%d ", result[i][j]); 
      } 
      printf("\n"); 
    } 
  } 
}