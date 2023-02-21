/*
Create a program that will help a manager determine the amount of commission to pay their sales persons 
depending on the sales they have sold. The commission  percentages are as follows;

0-1000                    1%

Above 1000-5000           3%

Above 5000-10000          5%

Above 10,000              10%

The program should allow the manager to enter the name, payroll number and the amount of sales 
the sales person has sold.

The program output should be able to display sales person name, payroll no, amount of sales, 
commission amount and the total salary.

The total salary is a sum of the commission and the retainer amount. 
The retainer amount for all the sales persons is Kshs.25,000.

The program should prompt the user to enter the number of sales people they want to capture their data. 
The program should only end when all the details of all the sales people have been entered.
*/

#include <stdio.h>
#include<stdlib.h>

void main(){
    //Define variables to be used
    char name[50];
    int payrollNumber;
    double salesAmount;
    const double RETAINER = 25000;
    double commission;
    double salary;
    int numLoop;
    int i = 0;
    char temp;

    //prompt the user to enter the number of sales people they want to capture their data   
    printf("How many sales people do you want to enter? ");
    scanf("%d", &numLoop);

    while (i < numLoop){

    printf("Follow the promtps:\n");
    
    //Enter the name, payroll number and the amount of sales the sales person has sold
    scanf("%c",&temp); //Read temporary character to avoid compiler skipping this string input
    printf("Enter name: ");
    scanf("%[^\n]", &name);


    printf("Enter payroll number: ");
    scanf("%d", &payrollNumber);

    printf("Enter amount of sales: ");
    scanf("%lf", &salesAmount);       

    //calculate commission based on amount of sales
    if (salesAmount <= 1000)
    {
        commission = 0.01 * salesAmount;
    }
    else if (salesAmount > 1000 && salesAmount <= 5000){
        commission = 0.03 * salesAmount;
    }
    else if (salesAmount > 5000 && salesAmount <= 10000){
        commission = 0.05 * salesAmount;
    }
    else if (salesAmount > 10000){
        commission = 0.10 * salesAmount;
    }

    //Calculate total Salary
    salary = commission + RETAINER;

    //display sales person name, payroll no, amount of sales, commission amount and the total salary
    printf("\n");
    printf("Salespeson Name   : %s\n",name);
    printf("Amount of sales   : %.2f\n",salesAmount);
    printf("Commission Amount : %.2f\n",commission);
    printf("Total Salary      : %.2f\n\n",salary);

    i++;
    }


}