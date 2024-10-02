#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int lower, upper;
    
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    
    printf("Enter upper limit: ");
    scanf("%d", &upper);
    
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    
    while (lower <= upper) {
        if (is_prime(lower)) {
            printf("%d ", lower);
        }
        lower++;
    }
    
    printf("\n");
    return 0;
}
