//Write a program for cnverting Fahrenheit to celsius.
//The input should be captured from the keyboard

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declare the variable to get degree in Fahrenheit and constants used for conversion

    double degreeFahrenheit;
    double convertedAmount;
    const double subAmount = 32;
    const double divAmount = 0.5555;

    //Prompt user to enter degree in Fahrenheit
    printf("Welcome to Fahrenheit to Celsius degree convertor\n");
    printf("Follow prompts to get degree conversion\n\n");

    printf("\nEnter the temperature in degrees Fahrenheit: ");
    scanf("%lf",&degreeFahrenheit);

    convertedAmount = (degreeFahrenheit - subAmount)*divAmount;

    printf("The converted amount for %.2lf F is %.2lf celsius\n",degreeFahrenheit,convertedAmount);
    system("pause");

    return 0;
}
