// Вычисляем обратное число
#include <stdio.h>
int main()
{
    int n, reverseNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        n /= 10;
    }

    printf("The reverse number is: %d\n", reverseNumber);

    return 0;  // Program execution completed successfully.
    
}