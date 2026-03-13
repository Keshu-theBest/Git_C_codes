// ---------------------------------------------------------
// Hollow Square Pattern
// Author: Keshu
// ---------------------------------------------------------
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter size of hollow square: %s", CYAN, RESET);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print star on border, space inside
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    k_signature();
    return 0;
}
