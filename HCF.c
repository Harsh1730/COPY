#include <stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b, hcf, lcm;
    
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    
    for (int i = 1; i <= max(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    
    // hcf = (a * b) / lcm;
    
   
    printf("%d", hcf);
    
    return 0;
}