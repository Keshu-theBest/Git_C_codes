// ---------------------------------------------------------
// Hollow Right Triangle Pattern
// Author: Keshu
// ---------------------------------------------------------
// *
// * *
// *   *
// *     *
// * * * * *
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter number of rows: %s", CYAN, RESET);
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Print star on left edge, right edge, or last row
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    k_signature();
    return 0;
}
