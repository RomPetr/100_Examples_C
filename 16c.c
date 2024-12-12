// Вычисляем сумму натуральных чисел с помощью цикла do while
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    do {
        printf("Введите целое положительное число > 0: ");
        scanf("%d", &n);
    }
    while(n <= 0);

    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Сумма натуральных чисел от 1 до %d равна: %d\n", n, sum);

    return 0;
}

