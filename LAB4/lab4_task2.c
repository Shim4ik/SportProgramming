#include <stdio.h>

// Напишіть програму, яка зчитує рік народження та обчислює вік людини.
int main()
{
    int year = 2025;
    int year_birth;

    printf("Enter your year of birth: ");
    scanf("%d", &year_birth);

    printf("Your age: %d or %d", year - year_birth, year - year_birth - 1);
    
    return 0;
}