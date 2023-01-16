#include<stdio.h>

void main() {
    // Variables
    int num1=43;
    printf("%i\n", num1);

    num1=834;
    // after changing variable value
    printf("%i\n", num1);

    // CONSTANTS
    // way 1: const 
    const int NUM2=74;
    //num2=48;
    printf("%i\n", NUM2);
 
    // way 2: #define
    #define PI 3.14
    printf("%f", PI);

}