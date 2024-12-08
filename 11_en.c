// Символ гласный или согласный
#include <stdio.h>
#include <ctype.h>

int main() {
    char symbol;

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    // Проверка на гласный или согласный символ
    if (isalpha(symbol)) {
        if (tolower(symbol) == 'a' || tolower(symbol) == 'e' || tolower(symbol) == 'i' ||
            tolower(symbol) == 'o' || tolower(symbol) == 'u') {
            printf("%c is a vowel.\n", symbol);
        } else {
            printf("%c is a consonant.\n", symbol);
        }
    } else {
        printf("You entered a non-alphabetic character.\n");
    }

    return 0;
}