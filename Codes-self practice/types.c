#include<stdio.h>
int main()
{
    int a1 = 7;                 // 2 to 4 bytes
    unsigned short integer = 8; // 2 bytes
    long integer1 = 8;          // 4 bytes
    short integer2 = 8;         // 2 bytes

    float b1 = 8.0;                    // 4 bytes - 6 decimal precision
    double myfloat1 = 7.45;            // 8 bytes - 15 decimal places precision
    long double myfloat2 = 7.43453455; // 10 bytes - 19 decimal places precision

    printf("a1 is %d\n",a1);
    printf("\nthe size of a1 is %zu bytes\n",sizeof(a1));
    printf("\nunsigned short integer is %d\n",integer);
    printf("\nthe size of unsigned short integer is %zu bytes\n",sizeof(integer));
    printf("\nlong integer1 is %ld\n",integer1);
    printf("\nthe size of long integer1 is %zu bytes\n",sizeof(integer1));
    printf("\nshort integer2 is %d\n",integer2);
    printf("\nthe size of short integer2 is %zu bytes\n",sizeof(integer2));

    printf("\n\n");

    printf("b1 is %f\n",b1);
    printf("\nThe size of b1 is %zu bytes\n",sizeof(b1));
    printf("\nmyfloat1 is %lf\n",myfloat1);
    printf("\nThe size of myfloat1 is %zu bytes\n",sizeof(myfloat1));
    printf("\nmyfloat2 is %Lf\n",myfloat2);
    printf("\nThe size of myfloat2 is %zu bytes\n",sizeof(myfloat2));
    return 0;
}

//End notes//

// In C, we think that sizeof() return an int value but it actually returns a value of type size_t.
// size_t is an unsigned data type, its format specifier is %zu.

//All format specifiers that are available are:
// int - %d or %i
// unsigned int - %u
// short - %hd
// unsigned short - %hu
// long - %ld
// unsigned long - %lu
// long long - %lld
// unsigned long long - %llu
// float - %f
// double - %lf
// long double - %Lf
// char - %c
// string - %s

//the decimal precision of float is 6 decimal places
//the decimal precision of double is 15 decimal places
//the decimal precision of long double is 19 decimal places

