// signature.h - The Keshu Brand
#include <stdio.h>

void signature() {
    // ANSI Color Codes
    char* cyan = "\033[0;36m";
    char* green = "\033[0;32m";
    char* reset = "\033[0m";

    printf("\n%s========================================%s\n", cyan, reset);
    printf("%s   >> CODE BY KESHU %s[SYSTEM_ONLINE]%s <<   %s\n", cyan, green, cyan, reset);
    printf("%s========================================%s\n", cyan, reset);
    printf("%s      Github: github.com/Keshu-theBest    %s\n\n", green, reset);
}
