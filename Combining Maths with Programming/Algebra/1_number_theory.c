// ---------------------------------------------------------
// Number Theory & Algebra
// Author: Keshu
// ---------------------------------------------------------
// Covers:
//   1. GCD and LCM          (uses k_gcd, k_lcm from keshu_core.h)
//   2. Modular Exponentiation — (base^exp) % mod  in O(log n)
//   3. Polynomial Evaluation — Horner's Method
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

// ---- Modular Exponentiation ----
// Computes (base^exp) % mod efficiently using repeated squaring.
// Used in: cryptography (RSA), prime testing, competitive programming.
long long modpow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// ---- Polynomial Evaluation (Horner's Method) ----
// P(x) = a0*x^n + a1*x^(n-1) + ... + an
// Horner's rewrite: P(x) = (...((a0*x + a1)*x + a2)*x... + an)
// Reduces multiplications from O(n²) → O(n)
double horner(double coeffs[], int degree, double x) {
    double result = coeffs[0];
    for (int i = 1; i <= degree; i++)
        result = result * x + coeffs[i];
    return result;
}

int main() {
    printf("%sNumber Theory & Algebra%s\n\n", CYAN, RESET);

    // ---- 1. GCD & LCM ----
    int a, b;
    printf("--- GCD & LCM ---\n");
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("  GCD(%d, %d) = %d\n", a, b, k_gcd(a, b));
    printf("  LCM(%d, %d) = %d\n\n", a, b, k_lcm(a, b));

    // ---- 2. Modular Exponentiation ----
    long long base, exp, mod;
    printf("--- Modular Exponentiation: (base ^ exp) %% mod ---\n");
    printf("  base: "); scanf("%lld", &base);
    printf("  exp : "); scanf("%lld", &exp);
    printf("  mod : "); scanf("%lld", &mod);
    printf("  %lld ^ %lld mod %lld = %lld\n\n",
           base, exp, mod, modpow(base, exp, mod));

    // ---- 3. Polynomial via Horner's Method ----
    int degree;
    printf("--- Polynomial Evaluation (Horner's Method) ---\n");
    printf("Enter degree: ");
    scanf("%d", &degree);

    double coeffs[degree + 1];
    printf("Enter %d coefficients (highest degree first): ", degree + 1);
    for (int i = 0; i <= degree; i++)
        scanf("%lf", &coeffs[i]);

    double x;
    printf("Evaluate at x = ");
    scanf("%lf", &x);
    printf("  P(%.4f) = %.6f\n", x, horner(coeffs, degree, x));

    k_signature();
    return 0;
}
