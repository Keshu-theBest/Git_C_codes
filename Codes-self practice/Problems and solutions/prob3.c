//Given a number (num)  we need to check whether it is a Neon Number ( i.e. a number where the sum of digits of the square of the number is equal to the number ) and return "true" or "false" accordingly.

//Todays task in college!! For example,9*9=81; 8+1=9; so 9 is a neon number.

#include <stdio.h>

int main()
{
    //Taking N as input after initialization
    int N;
    printf("Pleas enter N:\n");
    scanf("%d",&N);

    //Calculating and printing the square of N
    int sq_N;
    sq_N=N*N;
    printf("The squared number is:%d\n",sq_N);
    
    //Initializing and declaring sum//Initializing the digit 
    int sum=0;
    int digit;
    
    //Using while loop with the condition that we make succesive gifs of (sq_N/10) and then break the loop as it becomes 0
    while (sq_N>0)
    //Alternatively use for(;sq_N>0;)
    {
        digit=sq_N%10;
        sum=sum+digit;
        sq_N=sq_N/10;
    }
    
    //Printing out the sum of th digits of squared number
    printf("The sum of the digits of the square is:%d\n",sum);

    //Finally printing whether the number is Neon or not
    if (sum==N)
        printf("Th number N is indeed a NEON NUMBER!!");
    else
        printf("N is not a Neon number.");


    return 0;
}

//Difficulty: Can be harder than you think
//Topic: Loops in C
//Level: Intermediate to advanced