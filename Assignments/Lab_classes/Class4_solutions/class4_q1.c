//Write a program in C, Take student age as an input. If the person age is greater than or equal to 18 then show the message. “You are eligible for voting” otherwise show the message “You are not eligible for voting” 

#include <stdio.h>

int main()
{
    int std_age;
    printf("Please enter the age:\n");
    scanf("%d",&std_age);

    if (std_age>=18)
        printf("You are eligible for voting!!\n\n");

    //We could just skip the else below here and directly write the otherwise print statement because the (;) has already truncated the previous statement.
    else
        printf("You are not eligible for voting\n\n");

    
    return 0;
}

//This I assume that, is so easy that no need for commenting