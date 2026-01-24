//Ceil(x) is a function that is already inbuilt in math.h but let me try to build it here
//The ceiling function returns the smallest integer greater than or equal to x

//In summary, ceil(x) rounds *up* to the nearest int

#include <stdio.h>

int ceiling(float x)
{
    int k;
    k=(int)x; //integral part of x

    float g;
    g=x-k; //fractional part of x

    if (g==0.0)
        return k;
    else
        return (k+1);
}

int main()
{
    float N;
    printf("Please enter N:\n");
    scanf("%f",&N);

    printf("The ceil(N) is: %d\n\n",ceiling(N));
    return 0;
}