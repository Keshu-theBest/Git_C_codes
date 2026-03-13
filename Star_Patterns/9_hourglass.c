// ---------------------------------------------------------
// Hourglass Pattern
// Author: Keshu
// ---------------------------------------------------------
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter number of rows (half): %s", CYAN, RESET);
    scanf("%d", &n);

    // Top half (inverted pyramid)
    for (int i = n; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++)
            printf("  ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("* ");
        printf("\n");
    }

    // Bottom half (pyramid, skip tip)
    for (int i = 2; i <= n; i++) {
        for (int space = 1; space <= n - i; space++)
            printf("  ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("* ");
        printf("\n");
    }

    k_signature();
    return 0;
}
