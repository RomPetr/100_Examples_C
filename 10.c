// Является ли число четным
#include <stdio.h>

int main()
{
    int number;

    printf("Введите целое число: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d - четное число\n", number);
    }
    else
        printf("%d - нечетное число\n", number);
    
    return 0;
}