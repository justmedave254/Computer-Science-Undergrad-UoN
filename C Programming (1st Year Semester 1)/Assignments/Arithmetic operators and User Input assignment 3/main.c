/*
Create a program that requests the user to enter marks and grades for the units you
are currently doing and display the marks for the units to the screen in the following format. 
The program should be able to calculate the total and average score of the entered marks.

Course Code:       Marks:      Grade

CSC 115:             60          B

CSC 112:             80          A

.

.

Total

Avarage
*/

#include<stdio.h>

void main(){
    //Define variables to be used to get and store grade and marks
    int marks[5];
    char grade[5];
    int noUnits;
    int total = 0;
    int average = 0;
    char courseCode[5][10];//assumes one has a maximum of 5 units and each unit code has a max of 10 characters

    //Ask for number of units so as to create a loop
    printf("How many units are you currently doing? ");
    scanf("%d", &noUnits);

    //Loop
    for (int i = 0; i < noUnits; i++){
        printf("\nUnit number: %d\n",i+1);
        
        //Get course code, marks and grade for each unit within the loop
        getchar(); // Used to avoid error due to compiler reading \n char
        printf("Course code format: CSC 115\n");
        printf("Enter course code: ");
        scanf("%[^\n]", &courseCode[i]);

        printf("Enter your marks in %s: ",courseCode);
        scanf("%d", &marks[i]);

        getchar(); // Used to avoid error due to compiler reading \n char
        printf("Enter your grade in %s: ",courseCode);
        scanf("%c", &grade[i]);
    }

    printf("\nCourse code: \t Marks: \t Grade\n");

    //Loop through arrays and output values 
    for (int j = 0; j < noUnits; j++) {
        printf("%s: \t  %d \t\t   %c\n",courseCode[j],marks[j],grade[j]);

        total += marks[j];
        average = total / noUnits; //Average to nearest whole number
        }

    //Print out total and average
    printf("\nTotal  : %d\n",total);
    printf("Average: %d\n",average);
}