#include<stdio.h>
int main()
{
    int x;
    L:
    printf("\nEnter the day number: ");
    scanf("%d", &x);
    (x==1)? printf("Saturday") :(x==2)? printf("Sunday") :
    (x==3)? printf("Monday") :(x==4)? printf("Tuesday") :
    (x==5)? printf("Wednesday") :(x==6)? printf("Thursday") :
    (x==7)? printf("Friday") : printf("Wrong Input");
    goto L;
}
