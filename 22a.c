// Определение НОК с помощью бесконечного цикла
#include <stdio.h>
int main()
{
    int n1, n2, minMultiplie;
    printf("Введите два целых числа: ");
    scanf("%d %d", &n1, &n2);

    minMultiplie = (n1 > n2) ? n1 : n2;

    while (1)   
    {
        if(minMultiplie % n1 == 0 && minMultiplie % n2 == 0)
        {
            printf("НОК этих чисел: %d\n", minMultiplie);
            break;
        }
        ++minMultiplie;
    }
    

    return 0;
}