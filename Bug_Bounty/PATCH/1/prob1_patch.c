#include <stdio.h>
#include <stdlib.h>
int main()

{

    int Choice, Total_num_of_Courses, AllCredits = 0, available_credits, AllgradePoints = 0;
    int gradePoints, Mat_Number;
    float MGPA, CGPA, totalMats, n;
    char Name;
    float AllCgpaPoints = 0;
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
            printf("The Total Number of Secured Credits : %.f \n", AllCgpaPoints);
            MGPA = (float)AllCgpaPoints / (float)AllCredits;
            printf("Your Final MGPA Score : %.1f\n\a", MGPA);
            break;
            exit(0);

        case 2:
            printf("\nEnter the Number of MATS : ");
            scanf("%d", &Total_num_of_Courses);
            printf("The Number of MATS available : %d\n ", Total_num_of_Courses);
            for (int i = 1; i <= Total_num_of_Courses; i++)
            {
                printf("\nEnter Max. credits for MAT %d: ", i);
                scanf("%d", &available_credits);
                AllCredits = AllCredits + available_credits;

                printf("\nEnter your MGPA of MAT %d: ", i);
                scanf("%f", &MGPA);
                AllCgpaPoints = (float)(MGPA * available_credits) +(float) AllCgpaPoints;
            }

            CGPA = AllCgpaPoints / AllCredits;
            printf("Total Number of Available Credits : %d \n", AllCredits);
            printf("Total Number of Secured Credits : %.2f \n", AllCgpaPoints);

            printf("\nYour final CGPA is %0.2f\n\n\n\a", CGPA);
            break;
            exit(0);

        default:
            printf("\n\nBye Bye\n\n\a\a");

            exit(0); // exit command exit the ends the loopfrom stdlib.h
        }
    }
}

/*
Bug At
Line No.7,56,58,74,77,79

Bug at Line No.7
The Variable (AllCpgaPoints =0 was in Int)
I Changed that To Float
int AllCgpaPoints = 0;  Changes to - >> float AllCgpaPoints = 0;


Bug at Line No.56
The Format Specifer was %d Where the AllCpaPoints is Multiple of Int and Float
So the Final result will be in float but it was written there %d
%f for float variables
So I Changed %d -> %f


Bug at Line No.58
So the Format Specifer was %f
but %f will gives the 6 digits after the Exponential
Like 74.647533
but we dont need that extra number's
So we can use %.2f
Then it will give us 2 digits after point
Like 74.64


Sentence Error: At 63,65,68
Its A Sentence Error Where In CGPA we calculate MATS
But In Code it was Written Courses


Bug at Line No.79
The Varibale AllCgpaPoints is Taken as float
but in Printing the statment the format specifer was %d which is used when the
varibale is int
%d -> %f
and take %.2f for 2 taking 2 digits after the value
 */