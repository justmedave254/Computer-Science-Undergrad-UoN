//Registration Number: P15/144891/2022
//Group: One
//Question: One

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

/*
Create a program that will help the grade three students practice calculating the areas of the various shapes.
The program should have a menu where the student will select the shape they want to practice with. Once
the student selects a shape, the program should randomly select the parameters for calculating area of the
selected shape (Hint use rand function to generate random numbers) and ask the student for the answer.
The student answer should be checked to see if it is correct. If the student answer is correct, the student
should be a warded a point and new numbers for the parameters for calculating the area of the selected
shape are provided to the student. If the student answer is wrong the program should display the correct
answer and provide new numbers for the parameters for calculating the area of the selected shape. The
student should be provided with an option to continue practicing or quit after each attempt. If the student
selects to quit, the program should display the number of attempts and the total points earned.
*/

// Prototype functions
int areaSquare();
int areaRectangle();
int areaTriangle();
int areaCircle();

int studentPoints = 0;
int numberOfAttempts = 1;
const double TRIANGLEMULTIPLIER = 0.5;
const double PI = 3.14;

int main(){
    //Program to help students practice calculating area of shapes

    //------Program Breakdown (Pseudo-code)------
    //Select shape from Menu
    //Give them random vaues to work with

    //Answer => Check if answer is correct (Ask student then counter check)
        //If answer is correct, award student points (+1)
            //New numbers for parameters for calculating area of selected shape are provided to student
        //If answer is wrong, dispaly correct answer and provide new numbers as parameters
        //Note: No points awarded if answer is wrong
    //Continue practicing or quit? => Ask if student wants to continue practicing or quit
        //If student wants to continue practicing, ask if student wants to quit
    //Display number of attempts and total points earned

    //------------Program Start------------
    printf("Welcome to the area calculator!\n");
    printf("Follow the instructions below to begin.\n");

    //Menu (Student selects shape) => Call functions with each selection
    int MenuChoice;

        //Shape => Display shape
        //Area => Display area
        //Quit => Quit

    printf("----------Menu----------\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    printf("----------Menu----------\n");

    printf("Select a Menu choice item below to continue: ");
    scanf("%d", &MenuChoice); // User selects shape to practice with and stores it in menuchoice variable


    switch (MenuChoice) //Menu => Call functions with each selection
    {
    case 1:
        areaSquare();  //Call Square function
        break;
    case 2:
        areaRectangle(); //Call Rectangle function
        break;
    case 3:
        areaTriangle(); //Call Triangle function
        break;
    case 4:
        areaCircle(); //Call Circle function
        break;
    default:
        break;
    }

    return 0;
} // End of main function

int areaSquare(){
    //Function to calculate area of a square
    //Randomly select shape (Hint use rand function to generate random numbers) => Ask student for answer
        //Do this inside each function
    int randomNumber1;
    int randomNumber2;

    //Assign random values to variables
    randomNumber1 = rand();
    randomNumber2 = rand();

    printf("\nCalculate the area of a square with the following dimensions:\n");
    printf("Hint: Area of a square = length * width\n");
    printf("\n--------------Dimensions----------------\n");
    printf("Length: %d\n", randomNumber1);
    printf("Width: %d\n", randomNumber2);

    
    int answer;
    printf("\nWhat is your answer? ");
    scanf("%d", &answer);

    //Answer => Check if answer is correct (Ask student then counter check)
    if(answer == randomNumber1*randomNumber2){
        printf("Correct!\n");
        studentPoints += 1;  //If answer is correct, award student points (+1)

        //New numbers for parameters for calculating area of selected shape are provided to student
        randomNumber1 = rand();
    
        randomNumber2 = rand();

        char checkContinuity;
        char temp;
        scanf("%c", &temp);

        printf("\nDo you continue practicing? (type 'y' for yes and 'n' for no): ");
        scanf("%c", &checkContinuity);

        if (checkContinuity == 'y'){
            numberOfAttempts += 1;
            areaSquare();
        }else{
            //Display number of attempts and total points earned
            printf("Total Points Earned: %d\n", studentPoints);
            printf("Number of Attempts: %d\n", numberOfAttempts);
            printf("Quitting...\n");
            return 0;
        }
    }
    else{
        //If answer is wrong, dispaly correct answer and provide new numbers as parameters
        //Note: No points awarded if answer is wrong
        printf("Incorrect Answer!\n");
        printf("Correct Answer: %d\n", randomNumber1*randomNumber2);

        randomNumber1 = rand();
    
        randomNumber2 = rand();

        char temp;
        scanf("%c", &temp);
        
        char checkContinuity;
        printf("\nDo you continue practicing? (type 'y' for yes and 'n' for no): ");
        scanf("%c", &checkContinuity);
        
        if (checkContinuity == 'y'){
            numberOfAttempts += 1;
            areaSquare();
        }else{
            //Display number of attempts and total points earned
            printf("Total Points Earned: %d\n", studentPoints);
            printf("Number of Attempts: %d\n", numberOfAttempts);
            printf("Quitting...\n");
            return 0;
        }
    }

    return 0;
}

int areaRectangle(){
    //Randomly select shape (Hint use rand function to generate random numbers) => Ask student for answer
        //Do this inside each function
    int randomNumber1;
    int randomNumber2;

    randomNumber1 = rand();
    randomNumber2 = rand();

    printf("\nCalculate the area of a rectagle with the following dimensions:\n");
    printf("Hint: Area of a rectangle = length * width\n");
    printf("\n--------------Dimensions----------------\n");
    printf("Length: %d\n", randomNumber1);
    printf("Width: %d\n", randomNumber2);

    
    int answer;
    printf("\nWhat is your answer? ");
    scanf("%d", &answer);

    //Answer => Check if answer is correct (Ask student then counter check)
    if(answer == randomNumber1*randomNumber2){
        printf("Correct!\n");
        studentPoints += 1;  //If answer is correct, award student points (+1)

        //New numbers for parameters for calculating area of selected shape are provided to student
        randomNumber1 = rand();
    
        randomNumber2 = rand();

        char checkContinuity;
        char temp;
        scanf("%c", &temp);

        printf("\nDo you continue practicing? (type 'y' for yes and 'n' for no): ");
        scanf("%c", &checkContinuity);

        if (checkContinuity == 'y'){
            numberOfAttempts += 1;
            areaRectangle();
        }else{
            //Display number of attempts and total points earned
            printf("Total Points Earned: %d\n", studentPoints);
            printf("Number of Attempts: %d\n", numberOfAttempts);
            printf("Quitting...\n");
            return 0;
        }
    }
    else{
        //If answer is wrong, dispaly correct answer and provide new numbers as parameters
        //Note: No points awarded if answer is wrong
        printf("Incorrect Answer!\n");
        printf("Correct Answer: %d\n", randomNumber1*randomNumber2);

        randomNumber1 = rand();
    
        randomNumber2 = rand();

        char temp;
        scanf("%c", &temp);
        
        char checkContinuity;
        printf("\nDo you continue practicing? (type 'y' for yes and 'n' for no): ");
        scanf("%c", &checkContinuity);
        
        if (checkContinuity == 'y'){
            numberOfAttempts += 1;
            areaRectangle();
        }else{
            //Display number of attempts and total points earned
            printf("Total Points Earned: %d\n", studentPoints);
            printf("Number of Attempts: %d\n", numberOfAttempts);
            printf("Quitting...\n");
            return 0;
        }
    }

    return 0;
}

int areaTriangle(){
    //Randomly select shape (Hint use rand function to generate random numbers) => Ask student for answer
        //Do this inside each function
    int randomNumber1;
    int randomNumber2;

    randomNumber1 = rand();
    randomNumber2 = rand();

    printf("\nCalculate the area of a triange with the following dimensions:\n");
    printf("Hint: Area of a triangle = 0.5(base * height)\n");
    printf("\n--------------Dimensions----------------\n");
    printf("Base: %d\n", randomNumber1);
    printf("Height: %d\n", randomNumber2);

    
    double answer;
    printf("\nWhat is your answer? (write in 2dp) ");
    scanf("%lf", &answer);

    //Answer => Check if answer is correct (Ask student then counter check)
    if(answer == TRIANGLEMULTIPLIER*(double) randomNumber1*randomNumber2){
        printf("Correct!\n");
        studentPoints += 1;  //If answer is correct, award student points (+1)

        //New numbers for parameters for calculating area of selected shape are provided to student
        randomNumber1 = rand();
    
        randomNumber2 = rand();

        char checkContinuity;
        char temp;
        scanf("%c", &temp);

        printf("\nDo you continue practicing? (type 'y' for yes and 'n' for no): ");
        scanf("%c", &checkContinuity);

        if (checkContinuity == 'y'){
            numberOfAttempts += 1;
            areaTriangle();
        }else{
            //Display number of attempts and total points earned
            printf("Total Points Earned: %d\n", studentPoints);
            printf("Number of Attempts: %d\n", numberOfAttempts);
            printf("Quitting...\n");
            return 0;
        }
    }
    else{
        //If answer is wrong, dispaly correct answer and provide new numbers as parameters
        //Note: No points awarded if answer is wrong
        printf("Incorrect Answer!\n");
        printf("Correct Answer: %2.lf\n", TRIANGLEMULTIPLIER*(double) randomNumber1*randomNumber2);

        randomNumber1 = rand();
    
        randomNumber2 = rand();

        char temp;
        scanf("%c", &temp);
        
        char checkContinuity;
        printf("\nDo you continue practicing? (type 'y' for yes and 'n' for no): ");
        scanf("%c", &checkContinuity);
        
        if (checkContinuity == 'y'){
            numberOfAttempts += 1;
            areaTriangle();
        }else{
            //Display number of attempts and total points earned
            printf("Total Points Earned: %d\n", studentPoints);
            printf("Number of Attempts: %d\n", numberOfAttempts);
            printf("Quitting...\n");
            return 0;
        }
    }

    return 0;
}

int areaCircle(){
    //Randomly select shape (Hint use rand function to generate random numbers) => Ask student for answer
        //Do this inside each function
    int randomNumber1;

    randomNumber1 = rand();

    printf("\nCalculate the area of a circle with the following dimensions:\n");
    printf("Hint: Area of a circle = PI(radius * radius)\n");
    printf("\n--------------Dimensions----------------\n");
    printf("Radius: %d\n", randomNumber1);

    
    double answer;
    printf("\nWhat is your answer? (write in 2dp) ");
    scanf("%lf", &answer);

    //Answer => Check if answer is correct (Ask student then counter check)
    if(answer == PI*(double) randomNumber1*randomNumber1){
        printf("Correct!\n");
        studentPoints += 1;  //If answer is correct, award student points (+1)

        //New numbers for parameters for calculating area of selected shape are provided to student
        randomNumber1 = rand();

        char checkContinuity;
        char temp;
        scanf("%c", &temp);

        printf("\nDo you continue practicing? (type 'y' for yes and 'n' for no): ");
        scanf("%c", &checkContinuity);

        if (checkContinuity == 'y'){
            numberOfAttempts += 1;
            areaCircle();
        }else{
            //Display number of attempts and total points earned
            printf("Total Points Earned: %d\n", studentPoints);
            printf("Number of Attempts: %d\n", numberOfAttempts);
            printf("Quitting...\n");
            return 0;
        }
    }
    else{
        //If answer is wrong, dispaly correct answer and provide new numbers as parameters
        //Note: No points awarded if answer is wrong
        printf("Incorrect Answer!\n");
        printf("Correct Answer: %2.lf\n", PI*(double) randomNumber1*randomNumber1);

        randomNumber1 = rand();

        char temp;
        scanf("%c", &temp);
        
        char checkContinuity;
        printf("\nDo you continue practicing? (type 'y' for yes and 'n' for no): ");
        scanf("%c", &checkContinuity);
        
        if (checkContinuity == 'y'){
            numberOfAttempts += 1;
            areaCircle();
        }else{
            //Display number of attempts and total points earned
            printf("Total Points Earned: %d\n", studentPoints);
            printf("Number of Attempts: %d\n", numberOfAttempts);
            printf("Quitting...\n");
            return 0;
        }
    }

    return 0;
}