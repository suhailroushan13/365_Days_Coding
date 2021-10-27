#include <stdio.h>
int main()
{
    int i = 1, j = 4, sum = 0, value = 0;

    while (j <= 6)
    {
        value += j;
        j++;

        
        while (i <= 2)
        {
            sum += i;
            i++;
        }
    }

    printf("%d\n", value);
    return 0;

}