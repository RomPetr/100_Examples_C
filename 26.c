// Проверяем, является ли число палиндромом
#include <stdio.h>
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("Введите целое число: ");
    scanf("%d", &n);

    originalInteger = n;

    while (n != 0)
    {
        remainder = n % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    }

    if (originalInteger == reversedInteger)
        printf("%d - палиндром\n", originalInteger);
    else
        printf("%d - не палиндром.\n", originalInteger);

    return 0;  // Program execution completed successfully.
    
}