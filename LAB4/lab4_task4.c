#include <stdio.h>

// Напишіть програму, яка зчитує вартість товару та відсоток знижки, а потім обчислює кінцеву вартість. 
int main()
{
    int price;
    int discount;
    double new_price;

    printf("Enter price: ");
    scanf("%d", &price);

    printf("Enter discount: ");
    scanf("%d", &discount);

    new_price = price - (price * discount / 100.0);
    printf("Price with discount is: %.2f", new_price);
    
    return 0;
}