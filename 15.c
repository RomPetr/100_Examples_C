// Опрределяем, является ли число положительным или отрицательным
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }

    return 0;
}