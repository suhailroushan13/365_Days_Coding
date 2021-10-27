#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    int total;
    int i;
    int mean;
   
    int totals;

    int positiveSum = 0;
    int negativeSum = 0;

    
    printf("How many numbers you want to add : ");
    scanf("%d", &total);

   
    

   
    int numbers[total];
   

    for (i = 0; i < total; i++)
    {
        printf("Enter number %d : ", (i + 1));
        scanf("%d", &numbers[i]);
    }

   
    for (i = 0; i < total; i++)
    {
        if (numbers[i] < 0)
        {
            negativeSum += numbers[i];
        }
       
        else
        {
            positiveSum += numbers[i];
        }
    }
    (numbers[i] < 0) ? (system("clear")) : (printf("You Have Entered the 0 To Exit :\n"));

    printf("You have entered : \n");
    for (i = 0; i < total; i++)
    {
        printf("%d ", numbers[i]);
    }
   
    mean = positiveSum / total;
    printf("\nPositive numbers sum : %d", positiveSum);
    printf("\nMean of the  numbers is : %d\n", mean);

}