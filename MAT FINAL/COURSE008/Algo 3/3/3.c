#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 2; i <= 5; i++)
    {
        sum = sum + 2* i;
    }

    printf("\n The sum of the summation using for loop is  : %d\n", sum);
    return 0;
}