// ---------------------------------------------------------
// Cross / Plus (+) Pattern
// Author: Keshu
// ---------------------------------------------------------
//     *
//     *
// * * * * *
//     *
//     *
// (n must be odd for a centered cross)
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter size (odd number recommended): %s", CYAN, RESET);
    scanf("%d", &n);

    // Make n odd if it's even
    if (n % 2 == 0) n++;

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid || j == mid)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    k_signature();
    return 0;
}
