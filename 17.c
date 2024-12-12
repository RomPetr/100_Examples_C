// Проверяем, является ли символ алфавитным
#include <stdio.h>

int main()
{
    char symbol;
    printf("Введите символ: ");
    scanf("%c", &symbol);

    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
        printf("Символ '%c' является алфавитным.\n", symbol);
    } else {
        printf("Символ '%c' не является алфавитным.\n", symbol);
    }

    return 0;
}