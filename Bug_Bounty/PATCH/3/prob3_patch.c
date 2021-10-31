/*
CLI APP in C Language to calculate the MGPA and CGPA of a CS.CODE.IN
Suhail Roushan
Written In C Language
Date : 13/10/2021
*/

#include <stdio.h> /*Preproseccor Command to include header file*/
#include <stdlib.h>
int main()

{

    // No.of Courses = totalCourses
    // Credits for Course = credits
    // Total Credits = totalCredits
    // Grade points = gradePoints
    // Total Grade Points  = totalCgpaPoints
    // mgpa = totalCgpaPoints /totalCredits
    // Choice = options
    // Student name = studentName
    // Mat Number = MatNum

    int options, totalCourses, totalCredits = 0, credits, totalgradePoints = 0;
    int gradePoints, matNum;
    float mgpa, cgpa, totalMats, n, totalCgpaPoints = 0, totalmgpaPoints = 0;
    char studentNum;
    system("clear");
    printf("==========================================================\n");
    printf("Welcome To - CS.CODE.IN Credit Score Analyser\n");
    printf("==========================================================\n\n\n");

    // Using While Loop To Be In Loop Whenever they asked they get same thing from loop

    while (1)
    {

        /* printf commands gives the statment to the console*/
        /*scanf command is the user input function*/
        /*Here in scanf we add (&)because it addresses the location of variables*/

        
        printf("\nPlease Choose from the below Menu Options... \n\n");
        printf("1. Press 1 to Calculate MGPA  \n");
        printf("2. Press 2 to Calculate CGPA  \n");
        printf("0. Press 0 To Exit \n\n");

        printf("Enter your options now from below : ");
        scanf("%d", &options);

        // Using Switch So we can switch cases
        // where we can have n number for cases..

        switch (options)

        {

            // Case 1 for MGPA   // Case 1 Like Option 1
        case 1:

            printf("\nEnter The Student Name : ");
            scanf("%s", &studentNum);

            printf("\nEnter the MAT Number : ");
            scanf("%d", &matNum);

            printf("\nEnter the Number of Courses : ");
            scanf("%d", &totalCourses);
            printf("The Number of courses available : %d\n ", totalCourses);
            for (int i = 1; i <= totalCourses; i++)
            {
                printf("\nEnter credits alloted for course %d: ", i);
                scanf("%d", &credits);
                totalCredits = totalCredits + credits;
          printf("\nEnter grade scored for course %d: ", i);
                scanf("%d", &gradePoints);
                totalmgpaPoints = (gradePoints * credits) + totalmgpaPoints;
            }
           
            printf("The Total Number of Available Credits : %d \n", totalCredits);


            printf("The Total Number of Secured Credits : %.f \n", totalmgpaPoints);
            mgpa = (float)totalmgpaPoints / (float)totalCredits;
            printf("Your Final MGPA Score : %.2f", mgpa);
            break;
            exit(0);
            /// Case 2 for CGPA   // Case 2 Like Option 2

        case 2:

            totalCgpaPoints = 0, totalCredits = 0;
            printf("\nEnter the Number of Courses : ");
            scanf("%d", &totalCourses);
            printf("The Number of courses available : %d\n ", totalCourses);
            for (int i = 1; i <= totalCourses; i++)
            {
                printf("\nEnter credits alloted for course %d: ", i);
                scanf("%d", &credits);
                totalCredits = totalCredits + credits;

                printf("\nEnter grade mgpa for course %d: ", i);
                scanf("%f", &mgpa);
                totalCgpaPoints = (mgpa * credits) + totalCgpaPoints;
            }

            cgpa = (float)totalCgpaPoints / (float)totalCredits;
            printf("The Total Number of Available Credits : %d \n", totalCredits);
            printf("The Total Number of Secured Credits : %.2f \n", totalCgpaPoints);

            printf("\nYour Final CGPA is %0.2f\n\n\n", cgpa);

            break;
            exit(0);

            // Using Default for invalid inputs or for case 0

        default:
            printf("\n\nThanks for using this Credit Score Analyzer .....\nHope you... Use it again...\nByeee..... \n\n");

            // exit command exit the ends the loop
            exit(0);
        }
    }
}

/*
Added Code at Line 26th Which was Declared as Int Instead of float
int totalCgpaPoints =0; Changes to float totalCgpaPoints =0;

Added \n At Line Number 43
Because both cgpa and next line was getting at same line

Replaced totalCgpaPoints = totalmgpaPoints
At Line no.80,83,84

Added New Line at 92
totalCredits=0; totalCgpaPoints=0;


Added .2f% at Line no.109
to get 2 digits after decimal


*/