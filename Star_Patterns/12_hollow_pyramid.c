// ---------------------------------------------------------
// Hollow Pyramid Pattern
// Author: Keshu
// ---------------------------------------------------------
//         *
//       * *  *     (outer stars only, inner spaces)
//     *       *
//   *           *
// * * * * * * * * *
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter number of rows: %s", CYAN, RESET);
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++)
            printf("  ");

        int stars = 2 * i - 1;
        for (int j = 1; j <= stars; j++) {
            // Print star on left edge, right edge, or last row
            if (j == 1 || j == stars || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    k_signature();
    return 0;
}
