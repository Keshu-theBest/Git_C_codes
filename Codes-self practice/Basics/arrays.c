// [INCOMPLETE] - This is a program I am yet to study, I just copied it from a tutorial
#include <stdio.h>

int main() {
    int vector[3] = {2, 5, 8}; // Like your Linear Algebra vector
    //What this does is reserve space for 3 integers in a contiguous (contiguous means adjacent or touching) block of memory

    // Multiply every element by 2 (Scalar Multiplication)
    printf("Vector after scaling:\n");

    printf("[ "); //Just a decoration bracket
    for (int i = 0; i < 3; i++) {
        vector[i] = vector[i] * 2;
        
        printf("%d ", vector[i]);
        
    }
    printf("]"); //Just a decoration bracket

    printf("\n");
    return 0;
}