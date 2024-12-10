#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, determinant, root1, root2, realPart, imaginaryPart;

    printf("Введите коэффициенты a, b и c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    determinant = b * b - 4 * a * c;

    if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);

        printf("Дискриминант положительный, корни уравнения: %.2lf и %.2lf\n", root1, root2);
    }
    else if (determinant == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("Дискриминант ра��ен нулю, корень уравнения: %.2lf\n", root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-determinant) / (2 * a);

        printf("Дискриминант отрицательный, корни уравнения: %.2lf + %.2lfi и %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}