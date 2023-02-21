//Think of any task that requires you to collect data
//Create a program to collect all the data required.
//Use appropriate data types to store data for the various elements.
//The data should be entered through the keyboard using the scanf function.
//Use the printf function to display the information on the screen.

#include <stdio.h>
#include <stdlib.h>

//Average grade calculator
//Collects student name,id,age and grade in 5 units and print average grade and message of sucess or failure
int main()
{

    //Declare the variables to store student name,id,age and grade in 5 units
    char name[20];
    int id;
    int age;
    double unit1, unit2, unit3, unit4, unit5;
    double averageGrade;



    //Prompt user to enter values and store in respected variables
    printf("Welcome to average grade calculator\n");
    printf("Follow prompts to get your average Grade\n\n");

    printf("Enter your name: ");
    scanf ("%[^\n]%*c", name);
    //fgets(name,20,stdin);

    printf("Enter student id(Integers only): ");
    scanf("%d",&id);

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter marks in unit1: ");
    scanf("%lf",&unit1);

    printf("Enter marks in unit2: ");
    scanf("%lf",&unit2);

    printf("Enter marks in unit3: ");
    scanf("%lf",&unit3);

    printf("Enter marks in unit4: ");
    scanf("%lf",&unit4);

    printf("Enter marks in unit5: ");
    scanf("%lf",&unit5);


    printf("\nWelcome %s.\nYour student id is: %d and you are %d years old\n\n",name, id, age);
    printf("Your grades for each unit are:\nUnit1: %.2f\nUnit2: %.2f\nUnit3: %.2f\nUnit4: %.2f\nUnit5: %.2f\n",unit1, unit2, unit3, unit4, unit5);

    //print average grade
    printf("\nAverage grade is for all the five units is: %.2f\n", ((unit1 + unit2 + unit3 + unit4 + unit5)/5));

    return 0;
}
