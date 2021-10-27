#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, courseCount, courseCreditTotal = 0, courseCredit, courseCreditAchievedTotal = 0, courseCreditAchieved;
    int gp, matno, totalMats;
    float mgpa, n;
    char ch;
    int totalCourses, credits, totalCredits;
    float cgpa, totalCgpaPoints;
    //   system("clear");
    printf("\n\n*****\n");
    printf("Welcome to Hackathon 1 - CS.CODE.IN Credit Score Analyser\n");
    printf("***\n");

    while (1)
    {

        printf("Please Choose from the below Menu Options \n");
        printf("1. Press 1 to Calculate MGPA  \n");
        printf("2. Press 2 to Calculate CGPA  \n");
        printf("0. Press 0 To Exit \n");

        printf("Enter your choice now : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("We are supposed to write MGPA Logic here\n\n");

            printf("\nEnter The Student Name : ");
            scanf("%s", &ch);

            printf("\nEnter the MAT Number : ");
            scanf("%d", &matno);

            printf("\nEnter the Number of Courses : ");
            scanf("%d", &courseCount);
            printf("The Number of courses available : %d ", courseCount);

            for (int i = 1; i <= courseCount; i++)
            {
                printf("\nEnter credits alloted for course %d: ", i);
                scanf("%d", &courseCredit);
                courseCreditTotal = courseCreditTotal + courseCredit;

                printf("\nEnter grade scored for course %d: ", i);
                scanf("%d", &gp);
                courseCreditAchievedTotal = (gp * courseCredit) + courseCreditAchievedTotal;
            }

            printf("The Total Number of Available Credits : %d \n", courseCreditTotal);
            printf("The Total Number of Secured Credits : %d \n", courseCreditAchievedTotal);
            mgpa = (float)courseCreditAchievedTotal / (float)courseCreditTotal;
            printf("Your Final MGPA Score : %.4f", mgpa);
            break;
            exit(0);

        case 2:
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
            printf("The Total Number of Secured Credits : %f \n", totalCgpaPoints);

            printf("\nYour Final CGPA is %0.2f\n\n\n", cgpa);
            break;
            exit(0);
        default:
            printf("Adios...Bye Bye... \n\n");

            exit(0);
        }
    }
    return 0;
}