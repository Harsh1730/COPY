#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = (float)num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
