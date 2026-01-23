//Problem 2: C Program to Print Prime Numbers From 1 to N

#include <stdio.h>

int main()
{
    int N;
    printf("Please enter N:\n");
    scanf("%d",&N);


    printf("\nThe required primes are:-\n");

    //Using 'for' loop
    for (int x=1;x<=N;x++)
    {
        int isPrime=1; //Just like we did in 'Class3_q1.c'
        if (x<=1)
        {
            isPrime=0;
        }
        else
        {
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

        if (isPrime==1)
        {
            printf("%d\n",x);
        }
    }

    printf("\n\n\n");

    return 0;
}

//Level: Advanced
//Topic: Loops and conditions
//Difficulty: Very Very good