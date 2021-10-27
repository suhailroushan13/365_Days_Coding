#include <stdio.h>
int main()

{

    int n = 0, x, value;
    printf("Enter the value of x:");
    scanf("%d", &x);

    while (n <= 3)
    {
        value = (n + x)*(n + x)*(n + x);
        n++;
    }
    printf("The Value of x is %d\n", value);

    return 0;
}


/*



*/
#include <stdio.h>

int main()
{

    int value = 1, x, n = 0;
    printf("Enter x:\n");
    scanf("%d", &x);

    while (n <= 3)
    {
        value *= n + x;
        n++;
    }

    printf("%d\n", value);
    return 0;
}