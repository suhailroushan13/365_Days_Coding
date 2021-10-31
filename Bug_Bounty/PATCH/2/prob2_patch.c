#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("clear");
    int op, matNumber, courseCount, courseCredits, creditsTotal = 0, gradePoints, creditPoints = 0, matsCount, matCredits, matCreditsTotal = 0;
    float mgpa, cgpa, matCreditPoints;
    char name[20];
    printf("------------ CS.CODE.IN CREDIT SCORE ANALYZER------------\n");

    while (1)
    {
        printf("Welcome to the menu. Enter choice.\n\n0 To Exit\n1 To calculate the MGPA\n2 To calculate the CGPA\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            system("clear");
            printf("\nEnter the candidate's name:");
            scanf(" %[^\n]s", &name);
            printf("Enter the MAT number: ");
            scanf("%d", &matNumber);
            printf("Enter the number of courses available: ");
            scanf("%d", &courseCount);
            for (int i = 1; i <= courseCount; i++)
            {
                printf("\nEnter total credits alloted for Course %d: ", i);
                scanf("%d", &courseCredits);
                creditsTotal += courseCredits;
                printf("Enter Grade points secured for Course %d: ", i);
                scanf("%d", &gradePoints);
                creditPoints += (courseCredits * gradePoints);
            }
            printf("\nTotal number of avaliable credits: %d\n", creditsTotal);
            printf("Total number of credits secured: %d\n", creditPoints);
            mgpa = (float)creditPoints / (float)creditsTotal;
            printf("\nFinal MGPA scored by %s in MAT %d : %.2f\n---------------------------------------------\n", name, matNumber, mgpa);
            creditsTotal = 0, creditPoints = 0;
            break;

        case 2:
            system("clear");
            printf("\nEnter the candidate's name:");
            scanf(" %[^\n]s", name);
            printf("Enter the total number of MATs: ");
            scanf("%d", &matsCount);
            for (int i = 1; i <= matsCount; i++)
            {
                printf("\nEnter total credits alloted for MAT %d: ", i);
                scanf("%d", &matCredits);
                matCreditsTotal += matCredits;
                printf("Enter secured MGPA for MAT %d: ", i);
                scanf("%f", &mgpa);
                matCreditPoints += (matCredits * mgpa);
            }
            printf("\nTotal number of avaliable credits: %d\n", matCreditsTotal);
            printf("Total number of credits secured: %.2f\n", matCreditPoints);
            cgpa = (float) matCreditPoints / (float)matCreditsTotal;
            printf("\nCGPA scored by %s until MAT%d : %.2f\n---------------------------------------------\n", name, matsCount, cgpa);
            // matCreditsTotal = 0, matCreditPoints = 0;
            break;

        default:
            printf("--------------------Thank you, visit again. Bye.---------------------\n");
            exit(0);
        }
    }
}

/*

Bug at Line No. 60 and 22 

Bug at Line No.60
Typecasting Error
Float was not written At Numerator

cgpa =  matCreditPoints / (float)matCreditsTotal;
Changed to
cgpa = (float) matCreditPoints / (float)matCreditsTotal;

Bug at Line No. 22
Missing Address Identifier & at line 22 before variable name




*/