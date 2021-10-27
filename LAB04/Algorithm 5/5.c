#include<stdio.h>
#include <stdbool.h>
int main()


{
   
    int a= 8;
    //we cant use ++ expression for values 
    //we can only use for variables
    printf("%f\n", 22.0 / 7.0);
    //Normal Divison using float format specifier
    printf("%d\n", 9 % 8);
    //Using Remainder With %d format specifier

    //
 // if both are same in != ...0 
 // if both are same in == ...1

    printf("%d\n", 22 != 11);





    printf("%d\n", 44 <= 70);

    printf("%d\n", 77 && 8 && 9);
    


    printf("%d\n", ++a + 1);


    printf("%d\n", -15 ^ -255);
    


    //  binary of 255      11111111
    //                     00000000
    //                            1
    //                    -----------
    //                     11111111
    //   16 binary         00010000 
    //                   -----------
    //                    111101111      


    printf("%d\n", -255 | 16);
    






    //17 binary is 10001
    //             01110
    //                 1
    // ------------------
    //            01111
    //            00000
    // ------------------
    //            00000
    printf("%d\n", -17 & 0);

}


 
//  22.0/7.0
//  9 % 8
//  22 != 11
//  44 <=70
//  44 || 0
//  77 && 8 && 9
//  ++8 + 1
//  -15 ^ -255
//  -255 | 16
// -17 & 0