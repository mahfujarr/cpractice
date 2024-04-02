#include <stdio.h>

int main()
{
    char characterName [] = "George";
    int characterAge = 70;
    printf("There once was a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    characterAge = 30;
    printf("He really liked the name %s.\n", characterName);
    printf("But he didn't like being %d.\n", characterAge);
    return 0;
}