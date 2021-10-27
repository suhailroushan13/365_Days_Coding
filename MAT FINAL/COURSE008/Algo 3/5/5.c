#include<stdio.h>
int main()

{
    int result = 0;
    int k,x = 2;
    while(k <= 4)
    {
        result = result + k * k - 3 * k * x + 1;
        k++;
    }
    printf("%d\n", k);
}