#include <stdio.h>

// Напишіть програму, яка зчитує ціле число та перевіряє, чи є воно парним.
int main()
{    
    int num;
   
    printf("Enter number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Number is even");
    } else {
        printf("Number is odd");
    }

    return 0;
}