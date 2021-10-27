#include<stdio.h>
void main() {
    int num;
    float amt;
    char code;
    double pi;
    long int population;
    char msg[100];

    printf("\nEnter the value of num:");
    scanf("%d", &num);
    printf("\nEnter the value of amt: ");
    scanf("%f", &amt);
    printf("\nEnter the Value of pi:");
    scanf("%e", &pi);
    printf("\nEnter the value of population:");
    scanf("%ld", &population);
    printf("\nEnter the Value of code:");
    scanf(" %c", &code);
    printf("\nEnter the Message :");
    scanf("%s", msg);


    printf("\n Num=%d \n Amt =%.5f \n Code =%c \n Pi= %.5e \n Population = %ld \n Message = %s \n", num, amt, code, pi, population, msg);


}