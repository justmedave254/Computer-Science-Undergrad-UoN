/*
Create a program that displays customized messages to the user 
depending on their month of birth using the switch case.
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    int birthMonth;
    char firstName[50];

    printf("Enter your first name: ");
    scanf("%[^\n]", &firstName); 
    
    printf("Want a customised message?\n");
    printf("Use birth month number (1 for Jan ... 2 for Feb)");
    printf("Enter your birth month number: ");
    scanf("%d", &birthMonth);

    switch (birthMonth)
    {
    case 1:
        printf("\nMonth: January");
        printf("\nYou are a %s Jan wallflower",firstName);
        break;

    case 2:
        printf("\nMonth: February");
        printf("\nYou are a %s Feb rose",firstName);
        break;

    case 3:
        printf("\nMonth: March");
        printf("\nYou are a %s March cardigan",firstName);
        break;

    case 4:
        printf("\nMonth: April");
        printf("\nYou are a %s April tulip",firstName);
        break;

    case 5:
        printf("\nMonth: May");
        printf("\nYou are a %s May sunflower",firstName);
        break;

    case 6:
        printf("\nMonth: June");
        printf("\nYou are a %s June heart",firstName);
        break;

    case 7:
        printf("\nMonth: July");
        printf("\nYou are a %s July seed",firstName);
        break;

    case 8:
        printf("\nMonth: August");
        printf("\nYou are a %s Aug codfish",firstName);
        break;

    case 9:
        printf("\nMonth: September");
        printf("\nYou are a %s Sept icepop",firstName);
        break;

    case 10:
        printf("\nMonth: October");
        printf("\nYou are a %s Oct lava pool",firstName);
        break;

    case 11:
        printf("\nMonth: November");
        printf("\nYou are a %s Nov price tag",firstName);
        break;

    case 12:
        printf("\nMonth: December");
        printf("\nYou are a %s DEc chapati",firstName);
        break;
    
    default:
        printf("\nOnly enter numbers 1-12");
        break;
    }
}