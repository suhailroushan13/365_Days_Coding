#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf(" Enter the Number : ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf(" This is an Armstrong  number\n ");
    else
        printf(" Not an Armstrong number\n");
    return 0;
}