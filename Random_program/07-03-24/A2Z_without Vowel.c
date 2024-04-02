#include<stdio.h>
main(){

    char x = 'A';
    int y = 0;
    while(x<='Z'){
        if(x!='A' && x!='E' && x!='I' && x!='O' && x!='U'){
            printf("%c ", x);
            y++;
            if(y==5){
                printf("\n");
                y=0;
            }
        }
        x++;
    }
}
