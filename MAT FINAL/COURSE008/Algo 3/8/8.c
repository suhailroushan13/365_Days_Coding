#include <stdio.h>
int main()
{

int i,j;
int result = 0;
for (i = 1; i <= 2; i++)
{
    for (j = 4; j <= 6; j++)
    {
        result = result + 3 * i * j;
    }
}
printf("%d\n", result);
}