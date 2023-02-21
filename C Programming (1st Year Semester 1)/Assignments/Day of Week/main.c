//Write a program to print the day of the week name using a switch case

#include<stdio.h>
#include<stdlib.h>

void main(){
    int day;

    printf("Enter between 1-7 and get the day of the week: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    default:
    printf("Enter 1-7 only");
        break;
    }
}