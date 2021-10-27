/*

Purpose of Program : Finding Roots of Quadratic Equation With Formula -b+_sqrt(b*b-4*a*c)/2*a
Date : 13/10/2021.
Written by Suhail in C Language.
Exam : MAT 1.

*/

#include <stdio.h> /*Preproseccor Command to include header file*/
#include <math.h>  /*Preproseccor Command to include header file of maths function*/
int main() 

{
    /* Here we are declaring varibles for a b c and for sum and product */
    int a, b, c, d,sum,product;
     /* Here we are taking double for root1 and root 2.. because it can have large value with decimals*/
    double root1, root2;


/* printf commands gives the statment to the console*/
/*scanf command is the user input function*/
/*Here in scanf we add (&)because it addresses the location of variables*/
    printf("\nEnter the cofficient value of quadratic equation (a): ");
    scanf("%d", &a);
    printf("\nEnter the cofficient value of quadratic equation (b): ");
    scanf("%d", &b);
    printf("\nEnter the cofficient value of quadratic equation (c): ");
    scanf("%d", &c);

 /*Actual Formula 
 d = -b+sqrt(b * b - 4 * a * c)/2 * a ...and.... -b-sqrt(b * b - 4 * a * c)/ 2 * a   
 */
//Taking 1st Numerator
 d = b * b - 4 * a * c;

//Given Formula in Question
    sum = -b / a;
    product = c / a;

    //Using if else condition what if the roots get complex means what if d is less than 0 (d<0)
   // if d < 0 it will display this statement 
    if (d < 0)
    { 
       printf("Your given values are giving us complex roots...So Please Try with another number");
    }
    // else means if d ≠ 0 then apply this condition
    else

    {

        // Here d = b * b - 4 * a * c;

        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        
        //Using %lf because we used double keyword for root1 and root2
        //if you are getting the exponential form very large number 
        //you can specify at what decimal you need value by justing adding 0.4 or .4 before %lf
        // \n uses for new line
        printf("\nThe Roots of the quadratic equation = %.4lf %.4lf", root1,root2);
   
    }
 

// Here we are not using &d &sum &product because we defiend them above by writing formula to it
//on line number 35 37 38
    printf("\n The Discriminant value: %d", d);
    printf("\n Print the Sum of roots:  %d", sum);
    printf("\n Print the Product of roots: %d\n", product);


   // C Does not sepcify any return type for main function

    //The main function is generally supposed to return a value and 
    //after it returns something it finishes execution.
    //The return 0 means success and returning a non-zero number means failure.
    // Thus we "return 0" at the end of main function
     
     return 0;

}