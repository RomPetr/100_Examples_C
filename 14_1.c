//Високосный или не високосный год
#include <stdio.h>

int main()
{
    int year;
    printf("Введите год: ");
    scanf("%d", &year);

    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            // year делится на 400, поэтому високосный
            if(year % 100 == 0)
                printf("%d - високосный\n", year);
            else
                printf("%d - не високосный\n", year);
        }
        else
            printf("%d - високосный\n", year);
    }
    else
        printf("%d - не високосный\n", year);

    return 0;
}