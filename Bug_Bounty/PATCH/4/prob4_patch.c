#include <stdio.h>
#include <stdlib.h>
int main()
{
    int option, mat_num, courses, courseCredit=0, grade, credit_points, matCreditTotal = 0, total_mats, matCredit = 0;
    int internals, m1, total,totalInternal=0;
    float total2, mgpa2, cgpa,mgpa;
   
    int courseCreditTotal =0;
     
    while (1)

    {
        printf("\n\n*********************************************************");
        printf("\nWelcome to CS.CODE.IN's Credit Score Analyser\n");
        printf("*********************************************************\n");
        printf("\nChoose from below Options:- ");
        printf("\n\nA) Press 1 to Calculate MGPA");
        printf("\nB) Press 2 to Calculate CGPA");
        printf("\nE) Press 0 to Exit ");
        printf("\n\nEnter your Input:  ");
        scanf("%d", &option);

        switch (option)
        {

        case 1:
        

        
            printf("\nEnter MAT Number:  ");
            scanf("%d", &mat_num);
            printf("\nEnter Number of Courses:  ");
            scanf("%d", &courses);
            for (int i = 1; i <= courses; i++)
            {
                printf("\nEnter credits alloted for course %d: ", i);
                scanf("%d", &courseCredit);
                courseCreditTotal += courseCredit;


                printf("\nEnter Marks Achieved in Internals: ");
                scanf("%d", &internals);
                totalInternal +=  (internals * courseCredit);

                 
                


               
            }

         
            printf("\nTotal Grade Point = %d",totalInternal);
            printf("\nTotal Credits = %d",courseCreditTotal);
           

          

            mgpa = (float)totalInternal / (float)courseCreditTotal;
            printf("\nYour Final MGPA Score : %.2f", mgpa);
           
            break;
            exit(0);

        case 2:
        {

          
            printf("\nEnter Total Number of MAT's: ");
            scanf("%d", &total_mats);
            if (total_mats <= 12)
            {
                for (int i = 1; i <= total_mats; i++)
                {
                    printf("\nEnter total Credits for MAT %d: ", i);
                    scanf("%d", &matCredit);
                    printf("\nEnter MGPA for MAT %d: ", i);
                    scanf("%f", &mgpa2);
                    total2 += matCredit * mgpa2;
                    matCreditTotal += matCredit;
                    cgpa = (float)total2 / (float)matCreditTotal;
                }
                total2 = 0;
                matCreditTotal = 0;
                printf("\nTotal Credits into MGPA = %.2f", total2);
                printf("\nTotal MAT Credits = %d", matCreditTotal);

                printf("\nYour CGPA is %.2f (until mat %d)", cgpa, total_mats);
            }
            else
            {
                printf("Invalid Input!");
            }
        }
        break;
        case 0:
        {
            exit(0);
        }
        default:
            printf("Invalid Input!\a");
            break;
        }
    }
}
/*
Added Varibales
courseCredit =0
internals
totalinternals
courseCreditTotal =0;

Added while loop (1) at line No.11

Added logic and Typecasting at line No.60
mgpa = (float)totalInternal / (float)courseCreditTotal;
printf("\nYour Final MGPA Score : %.2f", mgpa);

Added logic for Multiplying internals * credits
totalInternal +=  (internals * courseCredit);

Removed flower brackets from case 1:

*/