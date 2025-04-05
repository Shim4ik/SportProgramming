#include <stdio.h>

// Напишіть програму, яка зчитує радіус кола та обчислює його площу.Формула: S=π∗r2
int main()
{
    const double P = 3.14;
    double radius, area;

    printf("Enter radius of circle: ");
    scanf("%lf", &radius);

    area = P * (radius * radius);

    printf("Area = %.2f", area);

    return 0;
}