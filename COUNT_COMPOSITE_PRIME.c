#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num, prime_count = 0, composite_count = 0;

    do {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &num);

        if (num > 1) {
            if (is_prime(num)) {
                prime_count++;
            } else {
                composite_count++;
            }
        }

    } while (num != -1);
    
    printf("Total primes: %d\n", prime_count);
    printf("Total composites: %d\n", composite_count);
    
    return 0;
}
