#include <stdio.h>

int main()

{

    int f = 1, i, num;

    printf("Enter the number for factorial :");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
  
        //5! = 5 

     f = f * i;
     
    }
    printf("The Answer is %d\n", f);
}