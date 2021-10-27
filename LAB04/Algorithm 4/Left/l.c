/*

Purpose of Program : Left Shift Operator
Date : 11/10/2021.
Written by Suhail in C Language.
Exam : LAB04.

*/
#include <stdio.h>
#include <math.h>
int main()
{
    
    int a, N, formula, final;
    printf("Enter Number for left shift operator on (<<) \n");
    scanf("%d", &a);


    printf("Number of bits you want to add ?\n");
    scanf("%d", &N);

    formula = pow(2, N);

    final = a * formula;

    printf("The value %d of it after using << operator for %d bits = %d\n", a, N, final);
    printf("%d\n", a << N); 

    return 0;
}