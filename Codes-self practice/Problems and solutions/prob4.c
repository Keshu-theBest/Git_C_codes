//Problem 4: An Armstrong number is defined as a number that is equal to the sum of the Kth power of each digit in the number, where K is the number of digits in it.

#include <stdio.h>
#include <math.h> //Obviously, stdio.h is not the only header file available to use
//math.h header file contains inbuilt functions like pow(a,b) for a^b, sin(angle), cos(angle), the value pi and much more.
//Go find out about it yourself from their official documentation, this will enrich the overall coding experience

//Defining a function specifically to get the number of digits of any integer N
int no_of_dig(int N)
{
    int result=0;
    int i;
    if (N==0)
    {
        result=1;
        
    }
    else
    {
        for (i=0;N>0;i++)
        {
            int digit;
            digit=N%10;
            N=N/10;
        }
        result=i;
    }

    return result;
}
//Note: This must be declared before main() function in order for us to use it in main()
//Declaring functions beforehand like this is a good practice as they might be used multiple times in the program and this reduces the space complexity, like it reduces the numbr of time we have to write the same code.

int main()
{
    //Taking input number we need to check for being Armstrongs' number or not
    int n;
    printf("Please enter n:\n");
    scanf("%d",&n);

    //Printing the number of digits in n using the previously dfined function
    printf("The number of digits in n are:\n%d\n\n",no_of_dig(n));

    //defining a copy of n because we would need the original value of n for the final check
    int d;
    d=n;

    //writing no_of_dig(n) as a power seems too much, so defining a varialble with the value of same, seems concise to use 
    int k;
    k=no_of_dig(n);

    //This is the real core of the problem: how to apply the loop

    //Initializing and declaring sum of the kth powers of the digits of n, dont worry,it will be changed later after the iterations
    int sum=0;
    for (int r=0;n>0;r++)
    {
        int digt;
        digt=n%10;
        n=n/10; //See here the value of n changes through the iterations, thats why we created a copy earlier by the name d

        sum=sum + (int)pow(digt, k); //using inbuilt function pow, pow(a,b) always return a float value, so manually formatting it to int by adding a (int) in front of it
    }


    //Finally printing out what we want to, not something like a joke but the relavant data
    printf("the sum of th kth powers of the digits of n is:\n%d\n\n",sum);

    //Conclusions
    if (sum==d)
        printf("The number is Armstrongs' number indeed!!\n\n");
    else
        printf("Sorry, the number is not Armstrongs' number\n\n");

    return 0;
}