
#include <math.h>
#include <stdio.h>
int main()
{
    // Right shift operator :
    int b; // algorithm in C where the input a
    int p; //  i should be taken using scanf and print the output

    /* printf commands gives the statment to the console*/
    /*scanf command is the user input function*/
    /*Here in scanf we add (&)because it addresses the location of variables*/

    printf("Enter a number :\n");
    scanf("%d", &b);
    printf("Enter The Number of Bits by which you want to add in right side or decrement to it\n");
    scanf("%d", &p);

    // Formula for rightshift
    int rightshift = b / pow(2, p);

    printf("Left Hand Side (LHS) ==  Right Hand Side (RHS)\n%d >> %d = %d == %d\n", b, p, b >> p, rightshift);

    return 0;
}