//Problem 4: An Armstrong number is defined as a number that is equal to the sum of the Kth power of each digit in the number, where K is the number of digits in it.

#include <stdio.h>
#include <math.h>

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

int main()
{
    int n;
    printf("Please enter n:\n");
    scanf("%d",&n);
    printf("The number of digits in n are:\n%d\n\n",no_of_dig(n));

    int d;
    d=n;

    int k;
    k=no_of_dig(n);

    int sum=0;
    for (int r=0;n>0;r++)
    {
        int digt;
        digt=n%10;
        n=n/10;

        sum=sum + (int)pow(digt, k);
    }

    printf("the sum of th kth powers of the digits of n is:\n%d\n\n",sum);

    if (sum==d)
        printf("The number is Armstrongs' number indeed!!\n\n");
    else
        printf("Sorry, the number is not Armstrongs' number\n\n");

    return 0;
}