#include <stdio.h>
#include <math.h>
#include "../../my_signature.h"


void matrix()
{
    printf("Let the matrix be A , and it is of the order m x n\n\n");
    printf("Then the general form of the matrix is:\n");
    printf("a11 a12 a13 ....... a1n\n");
    printf("a21 a22 a23 ....... a2n\n");
    printf(" .   .   .  .......  . \n");
    printf(" .   .   .  .......  . \n");
    printf(" .   .   .  .......  . \n");
    printf("am1 am2 am3 ....... amn\n");

}

int main()
{
    matrix();

    signature();
    return 0;
}

