#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float mean;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    mean = sum / (float)n;
    printf("Sum = %d, Mean = %.2f\n", sum, mean);
    return 0;
}
