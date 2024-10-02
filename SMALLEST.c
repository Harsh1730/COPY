#include <stdio.h>

int main() {
    int a, b, c, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("The smallest number is: %d\n", smallest);

    return 0;
}
