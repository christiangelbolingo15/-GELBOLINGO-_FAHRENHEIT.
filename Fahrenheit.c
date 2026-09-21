#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Process: Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
