#include <stdio.h>
#include <math.h>

int main() {
    float P, N, R;
    float SI, CI;

    printf("Enter the Principal amount (P): ");
    scanf("%f", &P);

    printf("Enter the Number of years (N): ");
    scanf("%f", &N);

    printf("Enter the Rate of interest (R): ");
    scanf("%f", &R);

    SI = (P * N * R) / 100;
    CI = P * pow((1 + R / 100), N) - P;

    printf("Simple Interest: %.2f\n", SI);
    printf("Compound Interest: %.2f\n", CI);

    return 0;
}
