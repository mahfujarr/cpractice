#include<stdio.h>
int main()
{
    char ch;
    char s[100], sen[100];

    scanf("%c", &ch);
    scanf("%s",s);
    gets(sen);

    printf("%c\n",ch);
    puts(s);
    puts(sen);
}