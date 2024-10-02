#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;  // Save the original number
    
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    
    if (original == reverse) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    
    return 0;
}
