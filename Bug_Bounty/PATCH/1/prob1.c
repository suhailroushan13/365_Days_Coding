#include <stdio.h>
#include <stdlib.h>
int main()

{

    int Choice, Total_num_of_Courses, AllCredits = 0, available_credits, AllgradePoints = 0, AllCgpaPoints = 0;
    int gradePoints, Mat_Number;
    float MGPA, CGPA, totalMats, n;
    char Name;
    system("clear");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Welcome To - CS.CODE.IN Imma Analyse ya Score\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");

    while (1)
    {

        printf("Please Choose from the below Menu Options... \n\n");
        printf("Press 1 to Calculate MGPA  \n");
        printf("Press 2 to Calculate CGPA  \n");
        printf("Press 0 To Exit \n\n");

        printf("Enter your options now from below : ");
        scanf("%d", &Choice);

        switch (Choice)

        {

        case 1:

            printf("\nStudent Name : ");
            scanf("%s", &Name);

            printf("\nEnter the MAT Number : ");
            scanf("%d", &Mat_Number);

            printf("\nEnter the Number of Courses : ");
            scanf("%d", &Total_num_of_Courses);
            printf("The Number of courses available are %d\n ", Total_num_of_Courses);

            for (int i = 1; i <= Total_num_of_Courses; i++)
            {
                printf("\nEnter credits alloted for course %d: ", i);
                scanf("%d", &available_credits);
                AllCredits = AllCredits + available_credits;

                printf("\nEnter grade scored for course %d: ", i);
                scanf("%d", &gradePoints);
                AllCgpaPoints = (gradePoints * available_credits) + AllCgpaPoints;
            }

            printf("The Total Number of Available Credits : %d \n", AllCredits);
            printf("The Total Number of Secured Credits : %d \n", AllCgpaPoints);
            MGPA = (float)AllCgpaPoints / (float)AllCredits;
            printf("Your Final MGPA Score : %.4f\n\a", MGPA);
            break;
            exit(0);

        case 2:
            printf("\nEnter the Number of Courses : ");
            scanf("%d", &Total_num_of_Courses);
            printf("The Number of courses available : %d\n ", Total_num_of_Courses);
            for (int i = 1; i <= Total_num_of_Courses; i++)
            {
                printf("\nEnter Max. credits for course %d: ", i);
                scanf("%d", &available_credits);
                AllCredits = AllCredits + available_credits;

                printf("\nEnter your MGPA of MAT %d: ", i);
                scanf("%f", &MGPA);
                AllCgpaPoints = (MGPA * available_credits) + AllCgpaPoints;
            }

            CGPA = (float)AllCgpaPoints / (float)AllCredits;
            printf("Total Number of Available Credits : %d \n", AllCredits);
            printf("Total Number of Secured Credits : %d \n", AllCgpaPoints);

            printf("\nYour final CGPA is %0.2f\n\n\n\a", CGPA);
            break;
            exit(0);

        default:
            printf("\n\nBye Bye\n\n\a\a");

            exit(0); // exit command exit the ends the loopfrom stdlib.h
        }
    }
}