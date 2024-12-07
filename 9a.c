// Меняем местами два числа
#include <stdio.h>

int main()
{
    double A, B, temp;
    printf("Введите A: ");
    scanf("%lf", &A);
    printf("Введите B: ");
    scanf("%lf", &B);

    temp = A;
    A = B;
    B = temp;

    printf("A после обмена: %.2lf\n", A);
    printf("B после обмена: %.2lf\n", B);

    return 0;

}