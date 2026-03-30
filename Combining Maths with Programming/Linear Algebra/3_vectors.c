// ---------------------------------------------------------
// Vector Operations in 3D
// Author: Keshu
// ---------------------------------------------------------
// Covers: Magnitude, Dot Product, Cross Product,
//         Angle between vectors, Parallelogram area
// ---------------------------------------------------------

#include "../../include/keshu_core.h"

int main() {
    double a[3], b[3];

    printf("%sVector Operations (3D)%s\n\n", CYAN, RESET);
    printf("Enter vector A (x y z): ");
    scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);
    printf("Enter vector B (x y z): ");
    scanf("%lf %lf %lf", &b[0], &b[1], &b[2]);

    // Magnitudes
    double mag_a = sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]);
    double mag_b = sqrt(b[0]*b[0] + b[1]*b[1] + b[2]*b[2]);

    // Dot product:  A · B = ax*bx + ay*by + az*bz
    double dot = a[0]*b[0] + a[1]*b[1] + a[2]*b[2];

    // Cross product:  A × B
    double cross[3] = {
        a[1]*b[2] - a[2]*b[1],
        a[2]*b[0] - a[0]*b[2],
        a[0]*b[1] - a[1]*b[0]
    };
    double mag_cross = sqrt(cross[0]*cross[0] + cross[1]*cross[1] + cross[2]*cross[2]);

    // Angle between vectors:  cos θ = (A · B) / (|A| |B|)
    double angle_deg = acos(dot / (mag_a * mag_b)) * (180.0 / M_PI);

    printf("\n%sResults:%s\n", GREEN, RESET);
    printf("  |A|                    = %.4f\n", mag_a);
    printf("  |B|                    = %.4f\n", mag_b);
    printf("  A · B  (dot product)   = %.4f\n", dot);
    printf("  A × B  (cross product) = (%.4f, %.4f, %.4f)\n",
           cross[0], cross[1], cross[2]);
    printf("  |A × B|                = %.4f\n", mag_cross);
    printf("  Angle between A and B  = %.4f°\n", angle_deg);
    printf("  Area of parallelogram  = %.4f sq. units\n", mag_cross);

    k_signature();
    return 0;
}
