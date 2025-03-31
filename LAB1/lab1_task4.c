#include <stdio.h>

int main() {
    int intNum;
    float floatNum, sum;

    printf("Enter an integer:");
    scanf("%d", &intNum);

    printf("Enter a fractional number: ");
    scanf("%f", &floatNum);

    sum = intNum + floatNum;

    printf("Sum5: %.2f\n", sum);

    return 0;
}