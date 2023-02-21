/*
Create a menu driven program that has the following menus
1.      Get number
2.      Determine if Number is Even or Odd
3.      Determine if number is positive or negative
4.      Determine how many digits are in a number
5.      Exit

You must create the following functions
1.      Display menu: This function should display the menu above and asks the user to make their choice
2.      Get input-This function should get the number to be checked by other functions
3.      isEven-The function to check if the number is even or odd
4.      IsPos-The function to check if the number is positive or not
5.      NumDigit: This function should return the number of digits in the given number

Hint: To determine the number of digits in a number, divide it repeatedly by 10. When the number reaches 0, the number of divisions is the number of digits in the original number.
*/

#include<stdio.h>
#include<stdlib.h>

//Declare global variables to be used
int menuChoice;
int number;
int count;
int divvy = 1;
int newnum;

//Declare the functions to be used
void displayMenu();
void getInput();
void isEven();
void isPos();
void numDigit();


void main(){
    while (menuChoice != 5){
        displayMenu();
        switch (menuChoice)
        {
        case 1:
            getInput();
            break;
        case 2:
            isEven();
            break;
        case 3:
            isPos();
            break;
        case 4:
            numDigit();
            break;
    
        default:
            printf("Exit Code");
            break;
        }
    }
};

void displayMenu(){
    printf("Welcome to the menu handler.\n");
    printf("1.Get number\n");
    printf("2.Determine if Number is Even or Odd\n");
    printf("3.Determine if number is positive or negative\n");
    printf("4.Determine how many digits are in a number\n");
    printf("5.Exit\n");

    printf("\nEnter a number to initiate that command: ");
    scanf("%d",&menuChoice);
};

void getInput(){
    printf("Enter number to be checked: ");
    scanf("%d",&number);
};

void isEven(){
    if (number % 2 == 0){
        printf("%d is an Even number.\n",number);
    }
    else{
        printf("%d is an Odd number.\n",number);
    }
};

void isPos(){
    if (number >= 0){
        printf("%d is a positive number.\n",number);
    }
    else{
        printf("%d is a negative number.\n",number);
    }
};

void numDigit(){
    while (divvy != 0)
    {
        divvy = number;
        divvy = number / 10;
        newnum = divvy;

        printf("%d Digits.\n",newnum);
    }
    
};