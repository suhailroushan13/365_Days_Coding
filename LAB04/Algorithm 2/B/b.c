#include <stdio.h>
int main()

{
    int a;

    printf("Enter the Number: ");
    scanf("%d", &a );
   
    (a > 0) ? 
     (printf("%d Number is Positive:  ", a)) :

            ((a < 0) ? 
             (printf("%d Number is Negative:  ", a)) :
             (printf("%d The Number is Zero or it can be invalid input\a\n", a))

            );

    return 0;
}