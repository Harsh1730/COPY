#include <stdio.h>

int main() {
    int lower_limit, upper_limit;

    // Input for the limits
    printf("Enter lower limit: ");
    scanf("%d", &lower_limit);
    printf("Enter upper limit: ");
    scanf("%d", &upper_limit);

    // Loop through the range
    printf("Prime numbers between %d and %d are: ", lower_limit, upper_limit);
    
    int num = lower_limit;
    while (num <= upper_limit) {
        if (num <= 1) {
            num++;
            continue; // Skip numbers less than or equal to 1
        }

        int is_prime = 1; // Assume the number is prime
        int i = 2;
        while (i * i <= num) {
            if (num % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
            i++;
        }
        
        if (is_prime) {
            printf("%d ", num); // Print the prime number
        }
        num++; // Move to the next number
    }
    
    printf("\n");
    return 0;
}
