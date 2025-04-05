#include <stdio.h>
#include <math.h>

// Користувач вводить координати двох точок. Обчисліть відстань між ними (формула Евклідової відстані).
int main()
{
    int xA,xB,yA,yB;
    double distance;

    printf("Enter x for A: ");
    scanf("%d", &xA);
    printf("Enter y for A: ");
    scanf("%d", &yA);
    
    printf("Enter x for B: ");
    scanf("%d", &xB);
    printf("Enter y for B: ");
    scanf("%d", &yB);

    printf("Cordinate of dots: A(%d;%d) B(%d;%d)\n", xA,yA, xB,yB);
    
    distance =  sqrt(pow(xB - xA, 2)+pow(yB - yA, 2));
    printf("Distance = %.2f", distance);

    return 0;
}