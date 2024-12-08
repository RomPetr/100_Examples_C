// Символ гласный или согласный
#include <stdio.h>
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    c = 'А';

    // printf("Введите символ: ");
    // scanf("%c", &c);

    // возвращает 1 (true), если с - гласный (нижний регистр)
    isLowercaseVowel = (c == 'а' || c == 'е' || c == 'и' || c == 'о' || c == 'у' || c == 'э' || c == 'ю' || c == 'я' || c == 'ы');

    // возвращает 1 (true), если с - гласный (верхний регистр)
    isUppercaseVowel = (c == 'А' || c == 'Е' || c == 'И' || c == 'О' || c == 'У' || c == 'Э' || c == 'Ю' || c == 'Я' || c == 'Ы');

    if (isLowercaseVowel || isUppercaseVowel)
        printf("\nВведенный символ  - гласный");
    else
        printf("\nВведенный символ  - согласный\n");

    return 0;
}