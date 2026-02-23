#include<stdio.h>

int main() {
    float c;
    printf("Enter temperature in celsius: ");
    scanf("%f", &c);
    float f = (c * 9/5) + 32;
    printf("Temperature in fahrenheit = %.2f\n", f);
}