#include<stdio.h>
main()
{
    char x;
    printf("Enter a character: \n");
    scanf("%c",&x);
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        switch (x)
        {
        case 'A':
            printf("Vowel");
            break;
        
        case 'E':
            printf("Vowel");
            break;
        
        case 'I':
            printf("Vowel");
            break;
        
        case 'O':
            printf("Vowel");
            break;
        
        case 'U':
            printf("Vowel");
            break;
    
        default:
            printf("Consonant");
            break;
        }
    }
    else{
        printf("Enter an Alphabet.");
    }
}