//gif rounds *down* to the nearest integer

#include <stdio.h>

int gif(float x)
{
    int k;
    k=(int)x;

    return k;
}

float frac_pt(float x)
{
    int k;
    k=(int)x;

    float f;
    f=x-k;

    return f;
}

int main()
{
    float N;
    printf("Please enter N:\n");
    scanf("%f",&N);

    printf("The gif(N) is: %d\n\n",gif(N));
    printf("The frac_pt(N) is: %f\n\n",frac_pt(N));
    return 0;
}