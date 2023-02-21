/*
Create a program that has two integer variables.

Display the sum, division, multiplication, subtraction  of the two variables.

Display the result in the following format

Addition: number 1 + number2 =Answer

Subtraction: number 1 - number2=Answer

Multiplication:  number 1 * number2=Answer

Division: number 1 / number2=Answer
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    int var1, var2;

    printf("Enter first integer: ");
    scanf("%d", &var1);

    printf("Enter second integer: ");
    scanf("%d", &var2);

    printf("\nAddition: %d + %d = %d\n",var1, var2, (var1 + var2));
    printf("Subtraction: %d - %d = %d\n",var1, var2, (var1 - var2));
    printf("Multiplication: %d * %d = %d\n",var1, var2, (var1 * var2));
    printf("Division: %d / %d = %d\n",var1, var2, (var1 / var2));
}