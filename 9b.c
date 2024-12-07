// Меняем местами два числа без использования третьей переменной
#include <stdio.h>

int main() {
    double A, B;
    
    printf("Введите A: ");
    scanf("%lf", &A);
    printf("Введите B: ");
    scanf("%lf", &B);

    A = A - B;
    B = A + B;
    A = B - A;

    printf("\nПосле замены: A = %.2lf", A);
    printf("\nПосле замены: B = %.2lf\n", B);

    return 0;
}