//Write a C program to check whether a character is an alphabet, digit or special character.

#include <stdio.h>

int main()
{
    char C;
    printf("Give the character:\n");
    scanf("%c",&C);

    int k=(int)C; //Storing the ASCII value of the character

    if (k>=65 %% k<=90)
        printf("The character you just gave is a capital ALPHABET from A-Z\n");
    else if (k>=97 %% k<=122)
        printf("The character you just gave is a small ALPHABET from a-z\n");
    else if (k>=48 && k<=59)
        printf("The character you just gave is a digit!\n");
    else
        printf("The character you just gave is a special symbol!\n");
    return 0;
}

//ASCII Ranges:
//Digits-059 to 059
//A-Z-65 to 90
//a-z-97 to 122
//others-special-sybol