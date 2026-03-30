// ---------------------------------------------------------
// Numerical Differentiation & Taylor Series Expansions
// Author: Keshu
// ---------------------------------------------------------
// Part 1: Verify k_derivative() on f(x) = sin(x), compare with cos(x)
// Part 2: Build sin(x), exp(x) from scratch via Taylor series
//         and compare with math.h
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

// The function we're differentiating
double my_func(double x) { return sin(x); }

// Taylor series for sin(x):  x - x³/3! + x⁵/5! - ...
double taylor_sin(double x, int terms) {
    double result = 0, term = x;
    int sign = 1;
    for (int n = 0; n < terms; n++) {
        result += sign * term;
        sign   *= -1;
        term   *= (x * x) / ((2*n + 2) * (2*n + 3));
    }
    return result;
}

// Taylor series for eˣ:  1 + x + x²/2! + x³/3! + ...
double taylor_exp(double x, int terms) {
    double result = 1, term = 1;
    for (int n = 1; n < terms; n++) {
        term   *= x / n;
        result += term;
    }
    return result;
}

int main() {
    // ---- Part 1: Numerical Derivative ----
    printf("%s=== Numerical Derivative of sin(x) ===%s\n", CYAN, RESET);
    printf("  f(x) = sin(x),  so  f'(x) = cos(x)\n\n");
    printf("  %-8s  %-20s  %-20s  %-12s\n",
           "x", "k_derivative(sin,x)", "cos(x) exact", "Error");

    double test_pts[] = {0.0, M_PI/6, M_PI/4, M_PI/3, M_PI/2, M_PI};
    for (int i = 0; i < 6; i++) {
        double x   = test_pts[i];
        double num = k_derivative(my_func, x);
        double ex  = cos(x);
        printf("  %-8.4f  %-20.12f  %-20.12f  %-12.2e\n",
               x, num, ex, fabs(num - ex));
    }

    // ---- Part 2: Taylor Series for sin(x) ----
    printf("\n%s=== Taylor Series for sin(1.0) ===%s\n", CYAN, RESET);
    printf("  %-6s  %-18s  %-18s  %-12s\n",
           "Terms", "taylor_sin(1)", "math.h sin(1)", "Error");
    for (int t = 1; t <= 8; t++) {
        double ts = taylor_sin(1.0, t);
        printf("  %-6d  %-18.12f  %-18.12f  %-12.2e\n",
               t, ts, sin(1.0), fabs(ts - sin(1.0)));
    }

    // ---- Part 3: Taylor Series for eˣ ----
    printf("\n%s=== Taylor Series for e^2.0 ===%s\n", CYAN, RESET);
    printf("  %-6s  %-18s  %-18s  %-12s\n",
           "Terms", "taylor_exp(2)", "math.h exp(2)", "Error");
    for (int t = 1; t <= 12; t++) {
        double te = taylor_exp(2.0, t);
        printf("  %-6d  %-18.12f  %-18.12f  %-12.2e\n",
               t, te, exp(2.0), fabs(te - exp(2.0)));
    }

    k_signature();
    return 0;
}
