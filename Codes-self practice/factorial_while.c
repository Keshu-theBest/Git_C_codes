#include <stdio.h>

//Defining functions beforehand is a good practice if we think we might reus it in our program
int fact(int n)
{
    int product=1;
    int i=1; //Setting int i=2 will do the same, it would ven reduce the iteration one time, I am not doing it in order to tell you this

    //using while loop to give n! as a return value
    while (i<=n) 
    {
        product *= i;
        i++;
    }

    return product; //Giving fact(n) a return value of the product (actually the final value of product)
}

int main()
{
    int N;
    printf("Please enter the value of the number you wanna find factorial of:\n");
    scanf("%d",&N);

    printf("The factorial of %d is %d\n\n",N,fact(N));
    return 0;
}

//Difficulty: Easy
//Topic: Loops in C