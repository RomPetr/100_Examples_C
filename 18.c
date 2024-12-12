// Вычисление факториала
#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Введите число n: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Отрицательное число не может быть использовано для вычисления факториала.\n");
        return 1;
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("Факториал числа %d равен: %llu\n", n, factorial);
    }

    return 0;
}