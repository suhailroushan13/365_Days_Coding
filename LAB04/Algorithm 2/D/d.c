#include <stdio.h>

int main()
{
    int a, b;
    a = 10, 20, 90;
    b = (10, 20, 90);

    /* In the first statement,
     value of a will be 10, because assignment operator (=)
      has more priority more than comma (,), thus 10 
      will be assigned to the variable a.

In the second statement,
 value of b will be 90, because 10, 20, 90 are enclosed in braces
 , and braces has more priority than assignment (=) operator.
  When multiple values are given with comma operator within the braces, 
  then right most value is considered as result of the expression. 
  Thus, 90 will be assigned to the variable b. */
    //printing the values
    printf("a= %d, b= %d\n\a", a, b);
    return 0;
}