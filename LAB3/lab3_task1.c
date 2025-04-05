#include <stdio.h>

// Користувач вводить довжину в метрах. Виведіть її в сантиметрах і міліметрах.
int main()
{
    int meter, cen, mill;

    printf("Enter length in meter: ");
    scanf("%d", &meter);

    cen = meter * 100;
    mill = meter * 1000;

    printf("Length in centimeters: %d cm\n", cen);
    printf("Length in millimeters: %d mm\n", mill);

    return 0;
}