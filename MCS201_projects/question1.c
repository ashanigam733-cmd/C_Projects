#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, D, realPart, imagPart, x1, x2;

    printf("Enter coefficients A, B, C: ");
    scanf("%f %f %f", &A, &B, &C);

    D = B * B - 4 * A * C;

    if (D > 0) {
        x1 = (-B + sqrt(D)) / (2 * A);
        x2 = (-B - sqrt(D)) / (2 * A);
        printf("Roots are real and different:\n");
        printf("x1 = %.2f\nx2 = %.2f", x1, x2);
    }
    else if (D == 0) {
        x1 = -B / (2 * A);
        printf("Roots are real and equal:\n");
        printf("x1 = x2 = %.2f", x1);
    }
    else {
        realPart = -B / (2 * A);
        imagPart = sqrt(-D) / (2 * A);
        printf("Roots are complex:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi", realPart, imagPart);
    }

    return 0;
}