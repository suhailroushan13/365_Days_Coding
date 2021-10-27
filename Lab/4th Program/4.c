#include<stdio.h>
#include<math.h>
void main() {
    float a, b, c, area, s;
    printf("\n Enter the Lenghts of 3 Sides of Triangle:");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
   
    printf("\n Area = %2.0f", area);
}