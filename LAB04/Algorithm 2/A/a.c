#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year :");
    scanf("%d", &year);

    (year % 100 == 0) ? ((year % 400 == 0) ? 
    (printf("%d is leap year\n", year)) :
     (printf("%d this is not a leap year or its an invalid input\a\n",year))) :

      ((year % 4 == 0) ?
       (printf("%d is leap year\n", year)) :
        (printf("%d this is not a leap year or its an invalid input\a\n", year)));

    return 0;
}