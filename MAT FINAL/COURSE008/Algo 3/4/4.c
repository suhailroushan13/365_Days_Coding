#include<stdio.h>
int main()
{

    
int x, sum= 0 , j;
printf("\nEnter the value of x: ");
scanf("%d", &x);
for (j = 1; j <= 4; j++)
{
    sum = x * j;
}
printf("The Anwser is %d\n", sum);

}