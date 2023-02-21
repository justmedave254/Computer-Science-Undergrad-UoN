//Create  program with variables to store your name, your age, and your weight.
//Use the appropriate data types for the variables.
//Assign values to the variables created and display on the screen a sentence with the following structure.
//"My name is [Your name], I am [Your age] Years old and I weigh [Your weight] Kilograms".

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declare the variables to store your name, your age, and your weight
    char name[] = "David";
    int age ;
    float weight;

    //Assign values to the variables created

    age = 19;
    weight = 75.0;

    //display on the screen a sentence
    printf("My name is %s, I am %d Years old and I weigh %.2f Kilograms",name,age,weight);
    printf("\n");

    return 0;
}
