//Write a C program to read any Month Number in integer and display Month name in the word. ( Using Switch Case)

#include <stdio.h>

int main()
{
    int month;
    printf("Enter the month number (1-12):\n");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }

    return 0;
}

//This is a simple program so no need for comments
//Just remember the switch case syntax