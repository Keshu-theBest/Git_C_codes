//Question 4: Write a program in C to print the ASCII value of characters.

#include <stdio.h>

int main()
{
    //Initialization
    char Char;

    //Taking Char as input 
    printf("Please enter the character:");
    scanf("%c",&Char);

    //Finally printing the ASCII value of Char
    printf("The ASCII value of Char is: %d\n\n",Char);

    return 0;
}

//Level: Beginner
//Topic: Character Handling and ASCII Values in C
//Difficulty: Easy