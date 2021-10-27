#include<stdio.h>
#include<math.h>
int main()
{
    int x1, x2, y1, y2;
    float Distance;
    printf("Enter x1, y1\n");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2, y2\n");
    scanf("%d %d", &x2, &y2);

    Distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distance = %f\n", Distance);
    return 0;
}