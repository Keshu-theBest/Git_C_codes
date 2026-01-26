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
    int (sum=0);
    for (int i=1;i<=n;i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int sum1 = sum_using_while(number);
    printf("Sum using while loop: %d\n", sum1);

    int sum2 = sum_using_for(number);
    printf("Sum using for loop: %d\n", sum2);

    return 0;
}