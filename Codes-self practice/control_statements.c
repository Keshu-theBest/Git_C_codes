#include <stdio.h>

void with_if_else()
{
    printf("-------------------------Using if-else-------------------------\n");
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks <=100 && marks >=0)
    {
        printf("Valid marks\n");
        if (marks >= 90)
        {
            printf("Grade A\n");
        }
        else if (marks >=75)
        {
            printf("Grade B\n");
        }
        else if (marks >=60)
        {
            printf("Grade C\n");
        }
        else if (marks >=40)
        {
            printf("Grade D\n");
        }
        else
        {
            printf("Grade F\n");
        }
    }
    else
    {
        printf("Invalid marks\n");
    }

    printf("\n---------------------------------------------------------------\n\n");
}

void with_switch_case()
{
    printf("-----------------------Using switch-case-----------------------\n");
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks\n");
        return;
    }

    switch (marks / 10)
    {
        case 10:
        case 9:
            printf("Grade A\n");
            break;
        case 8:
        case 7:
            printf("Grade B\n");
            break;
        case 6:
            printf("Grade C\n");
            break;
        case 5:
        case 4:
            printf("Grade D\n");
            break;
        default:
            printf("Grade F\n");
            break;
    }
    printf("\n---------------------------------------------------------------\n\n");
}

int sum_using_while(int n)
{
    int sum=0;
    int i=1;
    while(i<=n)
    {
        sum += i;
        i++;
    }

    return sum;
} 

int sum_using_for(int n)
{
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        sum += i;
    }
    return sum;
}
    
int main()
{
    with_if_else();
    printf("\n");
    with_switch_case();

    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int sum1 = sum_using_while(number);
    printf("Sum using while loop: %d\n", sum1);

    int sum2 = sum_using_for(number);
    printf("Sum using for loop: %d\n", sum2);

    return 0;
}

//Difficulty Level: Beginner
//Topic: Control Statements (if-else, switch-case, loops)
//Description: This program demonstrates the use of if-else and switch-case statements to determine grades based on marks, and also calculates the sum of first n natural numbers using both while and for loops.