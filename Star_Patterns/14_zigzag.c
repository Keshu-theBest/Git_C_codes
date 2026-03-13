// ---------------------------------------------------------
// Zigzag / Wave Pattern
// Author: Keshu
// ---------------------------------------------------------
// *   *   *   *
//  * * * * * *
//   *   *   *
// (3 rows, repeating wave of stars)
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter number of columns (width): %s", CYAN, RESET);
    scanf("%d", &n);

    // Row 1: stars at positions 0, 4, 8, ...  (every 4th col)
    // Row 2: stars at positions 1, 2, 3, 5, 6, 7, ... (between peaks)
    // Row 3: stars at positions 2, 6, 10, ... (every 4th col, offset by 2)

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < n; col++) {
            if ((row == 0 && col % 4 == 0) ||
                (row == 1 && col % 4 != 0) ||
                (row == 2 && (col - 2) % 4 == 0 && col >= 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    k_signature();
    return 0;
}
