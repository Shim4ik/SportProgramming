#include <stdio.h>

// Ти купуєш гру за 450 грн із знижкою 15%. Обчисли ціну зі знижкою і виведи її як ціле число.
int main()
{
    int price = 450;
    int discount = 15;
    int new_price;

    new_price = price - (price * discount / 100);
    printf("Price with discount is: %d", new_price);
    
    return 0;
}