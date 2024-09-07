#include <stdio.h>
#include <math.h>

int main() {
    float radius, volume, surface_area;
    const float PI = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    surface_area = 4 * PI * pow(radius, 2);

    printf("Volume of the sphere: %.2f\n", volume);
    printf("Surface area of the sphere: %.2f\n", surface_area);

    return 0;
}
