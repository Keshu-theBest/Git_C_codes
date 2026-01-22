//Question 1: Write a program in C to check whether the entered number is prime or not.

#include <stdio.h>

int main(){

    //Taking input and storing it in registers
    int x;
    int isPrime=1; //Flag: 1 means Prime and 0 means not prime

    //Taking input and then storing it
    printf("Please enter the number to check: \n");
    scanf("%d",&x);

    //Displaying the value the user chose
    printf("The number you entered was: %d\n",x);

    //Ruling out negative numbers and 0,1 from the condition check
    if (x<=1)
    {
        isPrime=0;
    }
    else
    {
        //Checking for divisors of x, if any besides 1 and itself
        //main idea is that if x does not have any divisors upto x/2 (excluding 1), then isPrime remains 1, els becomes 0
        int a=2;
        while (a<=x/2)
        {
            if (x%a==0)
            {    isPrime=0;
                 break;
            }
            a++;
        }
    }

    //Finally printing the nature of number x as prime or not using isPrime variable
    if (isPrime==0)
        printf("The number x is NOT PRIME.\n\n");
    else if (isPrime==1)
        printf("The number x is PRIME!!\n\n");

    return 0;
}

//Level: Intermediate
//Topic: Conditional Statements and Loops in C
//Difficulty: Decent
