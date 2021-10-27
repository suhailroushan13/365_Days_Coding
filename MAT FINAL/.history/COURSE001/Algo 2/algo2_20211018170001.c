/*
 CLI APP in C Language to perform operations for the below Menu
Suhail Roushan
Written In C Language
Date : 13/10/2021
*/

// Header files added using syntax #include
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
// Using int as main function


int main()
{


// decalring varibales  for all options

    int options; 
    int l, b,aor;
    float A, A1, A2, A3, sumOfAera;
    int s, pos;
    float pi = 3.14,r,AreaofC;
    int x1, y1, x2, y2, x3, y3, x, y;
    

    system("clear"); // Using a header file name stdlib.h to clear screen
    printf("==========================================================\n");
    printf("Welcome to 4 in 1 Calculator......\n");
    printf("==========================================================\n\n\n");
   
// asking user options

    printf("Choose an option from the below options : \n\n\n");
    printf("Press 0 to Exit\n");
    printf("Press 1 to calculate Area of Circle. \n");
    printf("Press 2 to calculate Area of Rectangle. \n");
    printf("Press 3 to calculate Area of Square. \n");
    printf("Press 4 to find wether the given point is in triangle or not. \n\n\n");
    



    printf("Enter your options now from below : ");
    scanf("%d", &options);

// switch case to switch cases
    switch (options)

    {

        // case 1 for area of cricle
    case 1: 
        printf("You have selected for Area of circle.\n");
        printf("Enter the Radius :");
        scanf("%f", &r);
        AreaofC = pi * r * r; 
        printf("Area of the circle is %.3f.\n", AreaofC);


        break;
        // case 2  for area of rectangle

    case 2: 
        printf("You have selected Area of Rectangle.\n\a");
        printf("Enter length of Rectangle.\n");
        scanf("%d", &l);
        printf("Enter breadth of Rectangle.\n");
        scanf("%d", &b);
        aor = l * b;
        printf("Area of the rectangle is %d.\n", aor);


        break;

        // case 3 for Perimeter of the Square
    case 3: 

        printf("You have selected option 3 for Perimeter of the Square.\n");
        printf("Enter side of your square\n");
        scanf("%d", &s);
        pos = 4 * s; 
        printf("Perimeter of your square is %d.\n", pos);

        break;

        // case 4 :Point lies in triangle or not

    case 4:
        printf("You have selected If Point lies in triangle or not.\n\a");
        printf("Enter Coordinates 1 :");
        scanf("%d %d", &x1, &y1);
        printf("Enter Coordinates 2 :");
        scanf("%d %d", &x2, &y2);
        printf("Enter Coordinates 3 :");
        scanf("%d %d", &x3, &y3);
        printf("Enter the Coordinates you want to check\n");
        scanf("%d %d", &x, &y);



        A = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;

        A1 = (x * (y1 - y2) + x1 * (y2 - y1) + x2 * (y - y1)) / 2;

        A2 = (x * (y2 - y3) + x2 * (y3 - y) + x3 * (y - y2)) / 2;
        
        A3 = (x * (y - y3) + x1 * (y3 - y) + x3 * (y - y1)) / 2;
        sumOfAera = A1 + A2 + A3;

        if (sumOfAera == A)
        {
            printf("Inside the triangle\n");
        }

        else
        {
            printf("Outside the triangle\n");
        }

        break;

    default:
        exit(0);
        break;
    }

    return 0;
}