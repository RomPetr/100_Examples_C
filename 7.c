// Вычисляем размер int, float, double и char
#include <stdio.h>

int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %lu bytes\n", sizeof(integerType));
    printf("Size of float: %lu bytes\n", sizeof(floatType));
    printf("Size of double: %lu bytes\n", sizeof(doubleType));
    printf("Size of char: %lu bytes\n", sizeof(charType));

    return 0;
}