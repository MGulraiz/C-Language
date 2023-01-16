#include<stdio.h>

void main() {
    // Syntax error
    printf("C Tutorial\n");

    // Runtime Error
    printf("%d \n", 10/2); // throws exception if number is divided by 0

    // Logical Error
    printf("Sum of 5 and 2 is %i", 5-2); // subtraction instead of addition
}
