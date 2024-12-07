// Сумма двух целых чисел
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}