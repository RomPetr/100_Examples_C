// Выводим таблицу умножения
#include <stdio.h>

int main() {
    int i, j;

    // Вывод заголовка таблицы
    printf("   ");
    for (i = 1; i <= 9; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    // Вывод тела таблицы
    for (i = 1; i <= 9; i++) {
        printf("%2d ", i);
        for (j = 1; j <= 9; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }

    return 0;
}