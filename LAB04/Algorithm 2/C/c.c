#include <stdio.h>

int main()
{
    int a, b, c, big,error;

    printf("Enter 3 numbers : \n");
    scanf("%d%d%d", &a, &b, &c);

    big = (a > b && a > c) ? (a) : ((b > c) ? (b) : (c));

    

    printf("Biggest is %d\n", big);
   

    printf("This is an invalid input %d\a\n", big);
    

    return 0;
}