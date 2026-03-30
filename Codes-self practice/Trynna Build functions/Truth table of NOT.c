#include <stdio.h>

int main(void) {
    int p;

    printf("Truth table of logical NOT (!)\n");
    printf("----------------------------\n");
    printf("P | !P\n");
    printf("----------------------------\n");

    for (p = 0; p <= 1; p++) {
        printf("%d |  %d\n", p, !p);
    }

    return 0;
}
