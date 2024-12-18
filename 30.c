// Выводим число Армстронга в заданном диапазоне
#include <stdio.h>
#include <math.h>

int main()
{
    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
    printf("Введите диапазон чисел: ");
    scanf("%d %d", &low, &high);
    printf("Выводим числа Армстронга: ");

    for(i = low + 1; i < high; i++)
    {
        temp2 = i;
        temp1 = i;

        // количество разрядов
        while(temp1 != 0)
        {
            temp1 = temp1 / 10;
            n++;
        }

        // результат содержит сумму цифр, возведенных в степень n
        while(temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 = temp2 / 10;
        }

        // проверяем, является ли число числом Армстронга
        if(result == i)
            printf("%d ", i);

        // сброс значений перед следующей итерацией
        result = 0;
        n = 0;
    }
    printf("\n");

    return 0;
}