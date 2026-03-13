// ---------------------------------------------------------
// Square Pattern
// Author: Keshu
// ---------------------------------------------------------
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// ---------------------------------------------------------

#include "../include/keshu_core.h"

int main() {
    int n;
    printf("%sEnter size of square: %s", CYAN, RESET);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    k_signature();
    return 0;
}
