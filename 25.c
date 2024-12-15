// Вычисляем степень числа
#include <stdio.h>
#include <math.h>

int main() {
    int base, exponent;
    long long result = 1;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    

    //result = pow(base, exponent);

    printf("Result: %.lld\n", result);

    return 0;  // Program execution completed successfully.
}