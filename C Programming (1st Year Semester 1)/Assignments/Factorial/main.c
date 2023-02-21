//Create a program that calculates the factorial of a number

#include <stdio.h>
#include<stdlib.h>

void main() {

    int num, i;
    unsigned long long fact = 1;

    printf("Due to memory...Max input accepted is 65\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Error! Use positive integers only.");
    else {
        for (i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d is: %llu", num, fact);
    }

}