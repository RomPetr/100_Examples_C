// Определение ASCII-значения символа
#include <stdio.h>

int main() {
    char symbol;
    printf("Введите символ: ");
    scanf("%c", &symbol);
    printf("ASCII-значение символа '%c' = %d\n", symbol, symbol);
    return 0;
}