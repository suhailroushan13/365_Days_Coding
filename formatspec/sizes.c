#include <stdio.h>
void main(){
    int a = 45;
    printf("The Size Allotted for Variable A : %zu\n", sizeof(int));
    printf("The Size Allotted for int : %zu\n", sizeof(a));
    printf("Size of char : %zu\n", sizeof(char));
    printf("Size of float : %zu\n", sizeof(float));
    printf("Size of unsigned int : %zu\n", sizeof(unsigned int));
    printf("Size of unsigned short int : %zu\n", sizeof(unsigned short int));
}