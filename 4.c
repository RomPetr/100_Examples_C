//Умножение двух вещественных чисел
#include <stdio.h>
int main()
{
    double firstNumber, secondNumber, product;
    printf("Введете два числа: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);
    product = firstNumber * secondNumber;
    printf("Произведение = %.2lf\n", product);
}