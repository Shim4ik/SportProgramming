#include <stdio.h>

int main() {
    char ch;

    printf("Enter symbol: ");
    scanf("%c", &ch);

    printf("Next symbol: %c\n", ch + 1);

    return 0;
}
