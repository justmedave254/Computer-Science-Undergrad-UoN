//Create a program that will convert a given amount in Kshs to USD using today's exchange rate.
//Have the user enter the amount to be converted from the keyboard..

//At the time of creation the exchange rate was 121.15 KES for 1 USD

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declare the variable to get amount in KES and constant conversion rate

    double amountKES;
    const double conversionRate = 121.51;
    double convertedAmountUSD;

    //Prompt user to enter the aount in KES
    printf("Welcome to KES to USD currency convertor\n");
    printf("Follow prompts to get currecny conversion\n\n");
    printf("Note that the current rate of conversion is 1 USD = %.2lf",conversionRate);

    printf("\nEnter the amount in KES: ");
    scanf("%lf",&amountKES);

    convertedAmountUSD = amountKES/conversionRate;

    printf("The converted amount for %.2lf KES is %.2lf USD\n",amountKES,convertedAmountUSD);
    system("pause");

    return 0;
}
