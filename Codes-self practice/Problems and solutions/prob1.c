//Program 1: Write a program to print the multiplication table of a given number//

#include<stdio.h>

int main()
{
    //Initializing and taking input of the number we wanna print the table for//
    int a;
    printf("Please enter the number you want to print the table for:\n");
    scanf("%d",&a);

    //Initializing and taking input of the number upto which we wanna print the table//
    int n;
    printf("\nPlease enter the number upto which you wanna print the table:\n");
    scanf("%d",&n);

    printf("\n\nThe required table is:-\n");

    //Using for loop to incorporate the repetitive multiplication task//This is the core of this problem//
    for(int i=1;i<=n;i++)
    {
        int m;
        m=i*a;
        printf("%d\n",m);
    }
    
    //extra spaces at the end because some terminals give post-code output also as in my terminal//
    printf("\n\n\n")

    return 0;
}

//Note: I dont know if the post-code output is shown in every terminal or not but just to be safe i added th extra spacelines at the end for clean look//

//Level: Beginner
//Topic: Use of for and while loops
//Difficulty: Easy