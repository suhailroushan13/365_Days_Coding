/*

Purpose of Program : Right Shift Operator
Date : 11/10/2021.
Written by Suhail in C Language.
Exam : LAB04.

*/
#include <stdio.h>
#include <math.h>
int main()
{
    
    int a, N, formula, result;

    printf("Enter the number which you want to perform >> operator\n");
    scanf("%d", &a);

    printf("Number to bits you want to replace from there\n");
    scanf("%d", &N);

    formula = a / pow(2, N);

    printf("%d\n", a >> N);
    
    return 0;
}