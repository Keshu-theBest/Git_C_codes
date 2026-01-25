//Write a program in C to check whether the input character is a vowel or consonant.

#include <stdio.h>

int main()
{
    char c;
    printf("Please enter the character:\n");
    scanf("%c",&c);

    //We can always just make cases based on the arcii values of vowels or we can directly make cases for c==a,e,i,o,u differenly or use with || logical 'OR' but is there any other approach??

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("Vowel\n\n");
    }
    else
    {
        printf("Consonant\n\n");
    }
    return 0;
}

//PS:- Tell me if you have any other solution(s)