// Code to print the roots of a quadratic equation

#include <stdio.h>
#include <math.h>

void roots(float a,float b,float c)
{
    float D, root1, root2, sqrtD;
    D=(b*b)-4*(a*c);
    sqrtD=sqrt(D);

    if (D==0)
    {   
        root2=root1=-(b/(2*a));
    }
    else if (D>0)
    {
        root1= -(b/2*a)+(sqrtD/(2*a));
        root2= -(b/2*a)-(sqrtD/(2*a));
    }
    
    if (D>=0)
    {
        printf("The roots of the quadratic equation are:-\n");
        printf("%f\n",root1);
        printf("%f\n",root2);
    }

    else
    {    
        printf("Complex roots!!\n\n");
        float k1,k2;
        k1=-(b/2*a);
        k2=(sqrt(-D))/2*a;

        printf("The first root is:\n");
        printf("%f + (%f)i\n",k1,k2);

        printf("The second root is:\n");
        printf("%f - (%f)i\n",k1,k2);

    }
}

int main()
{
    float a,b,c;
    printf("The genral form of any quadratic equation is:\n");
    printf("a(x*x)+b(x)+c = 0\n");

    printf("Please enter a b c :\n");
    scanf("%f %f %f",&a,&b,&c);

    roots(a,b,c);
}

//Very good practice question