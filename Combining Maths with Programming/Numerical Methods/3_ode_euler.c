// ---------------------------------------------------------
// Euler's Method for Ordinary Differential Equations (ODEs)
// Author: Keshu
// ---------------------------------------------------------
// Solves:  dy/dx = f(x, y)
// Demo:    dy/dx = y,  y(0) = 1  →  exact solution: y = eˣ
//
// Euler's formula: y_{n+1} = y_n + h * f(x_n, y_n)
// Smaller step h = better accuracy
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

// --- Change this to solve any ODE ---
double f(double x, double y) {
    return y;   // dy/dx = y
}

int main() {
    double x0, y0, h, xn;

    printf("%sEuler's Method — dy/dx = y,  y(0) = 1%s\n\n", CYAN, RESET);
    printf("Initial x  (x0) [try 0]: ");   scanf("%lf", &x0);
    printf("Initial y  (y0) [try 1]: ");   scanf("%lf", &y0);
    printf("Step size  (h)  [try 0.1]: "); scanf("%lf", &h);
    printf("Solve until x =          ");   scanf("%lf", &xn);

    double x = x0, y = y0;
    int steps = (int)((xn - x0) / h);

    printf("\n%s%-10s  %-18s  %-18s  %-12s%s\n",
           YELLOW, "x", "Euler y", "Exact eˣ", "Error", RESET);

    for (int i = 0; i <= steps; i++) {
        double exact = exp(x);
        printf("%-10.4f  %-18.8f  %-18.8f  %-12.2e\n",
               x, y, exact, fabs(y - exact));
        y = y + h * f(x, y);
        x += h;
    }

    printf("\n%sTip: Halve h and re-run — error should roughly halve too (O(h)).%s\n",
           GREEN, RESET);

    k_signature();
    return 0;
}
