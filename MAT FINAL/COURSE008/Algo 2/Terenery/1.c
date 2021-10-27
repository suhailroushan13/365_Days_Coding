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

     /* Here we are declaring varibles for sum and product */
     int sum,product;
     /* Here we are taking float for a b c d.. because it can have large value with decimals*/
     float a,b,c,d;

     /* printf commands gives the statment to the console*/
     /*scanf command is the user input function*/
     /*Here in scanf we add (&)because it addresses the location of variables*/

     printf("\nEnter the cofficient value of quadratic equation (a): ");
     scanf("%f", &a);
     printf("\nEnter the cofficient value of quadratic equation (b): ");
     scanf("%f", &b);
     printf("\nEnter the cofficient value of quadratic equation (c): ");
     scanf("%f", &c);

     /*Actual Formula 
     d = -b+sqrt(b * b - 4 * a * c)/2 * a ...and.... -b-sqrt(b * b - 4 * a * c)/ 2 * a   */
     //Taking 1st Numerator
      d = b * b - 4 * a * c;
      // Terenery Operator


     (d < 0) ? (printf("Your given values are giving us complex roots...So Please Try with another number")) : (printf("a= %0.4f\tb= %0.4f\n", (-b - sqrt(d)) / 2 / a, (-b + sqrt(d)) / 2 / a));

         
        

     sum = -b / a;
     product = c / a;
     //Using %0.f because we used for keyword for root1 and root2
     //if you are getting the exponential form very large number
     //you can specify at what decimal you need value by justing adding 0.1 or .0 before %f
     // \n uses for new line

     printf("\n The Discriminant value: %.0f", d);
     printf("\n Print the Sum of roots:  %d", sum);
     printf("\n Print the Product of roots: %d\n", product);
     
}