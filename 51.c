// Своп чисел в циклическом порядке с помощью вызова по ссылке
#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c);

int main()
{
    int a, b, c;
    printf("Введите a, b и c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("До замены:\n");
    printf("a = %d, \nb = %d, \nc = %d\n", a, b, c);

    cyclicSwap(&a, &b, &c);

    printf("\nПосле замены:\n");
    printf("a = %d, \nb = %d, \nc = %d\n", a, b, c);

    return 0;
}

void cyclicSwap(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}