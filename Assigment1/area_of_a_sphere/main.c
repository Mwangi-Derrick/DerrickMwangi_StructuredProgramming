#include <stdio.h>
#include <math.h> // Include this for M_PI and pow()
#define _USE_MATH_DEFINES // Required on some systems (e.g., MSVC)


int main() {
    float radius;
    float surface_area;

    // Take the radius of a sphere as input.
    printf("Enter the radius of the sphere: ");
    if (scanf("%f", &radius) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    // 2. Calculate the surface area (A = 4 * PI * r^2)
    // Note: 4.0 is used to ensure the calculation is done in floating-point math.
    surface_area = 4.0 * 22/7 * pow(radius, 2); 
    // OR: surface_area = 4.0 * M_PI * radius * radius;

    // 3. Display the result.
    printf("\nThe surface area of the sphere with radius %.2f is: %.2f\n", 
           radius, 
           surface_area);

    return 0;
}

