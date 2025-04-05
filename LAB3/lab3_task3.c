#include <stdio.h>

// Користувач вводить кількість секунд. Виведіть еквівалент у годинах, хвилинах і секундах.
int main()
{    
    int sec;
    double hour, minute;

    printf("Enter seconds: ");
    scanf("%d", &sec);

    hour = sec / 3600.0;
    minute = sec / 60.0;

    printf("Hour = %.2f\n", hour);
    printf("Minute = %.2f", minute);

    return 0;
}