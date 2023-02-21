/*
Use the while loop to write a program that will print in reverse order the numbers preceding a 
given number starting with the given number and calculate the product of the numbers . 
For example if the given number is 5 the output should be 5,4,3,2,1.
The output should also indicate the product after each iteration.
*/

#include<stdio.h>

void main(){
    int num;
    int prod = 1;

    printf("Enter number: ");
    scanf("%d",&num);

    while (num > 0){
        printf("%d\n",num);
        prod = prod * num;
        printf("Product of previous numbers is: %d\n",prod);
        num --;
    }
}