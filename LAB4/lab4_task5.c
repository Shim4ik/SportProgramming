#include <stdio.h>

// Користувач вводить тризначне число. Обчисліть та виведіть суму його цифр.
int main()
{
    int num;
    int first, second, third;
    
    printf("Enter number of 3 symbol: ");
    while (1)
    {        
        scanf("%d", &num);
        if (num < 100 || num > 999){
            printf("Enter correct number of 3 symbol: ");         
        } else {
            break;
        }
    }
        
    first = num / 100;
    second = num / 10 % 10;
    third = num % 10;

    printf("Sum of numbers: %d", first + second + third);

    return 0;
}