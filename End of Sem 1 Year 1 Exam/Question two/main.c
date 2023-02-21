//Registration Number: P15/144891/2022
//Group: One
//Question: Two

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Create a program for creating results slips for grade six students. The program should capture from the
user the student details as follows:
1. Student names
2. Student index number
3. Student age
4. Students marks in English, Kiswahili, Mathematics, Integrated Science and Creative arts
5. Student grade- The program should automatically grade the student based on the marks they have
scored. Grading system is as follows:
    a. 80 and Above –Exceeds Expectations (E)
    b. 60- 79 – Meets Expectations (M)
    c. 50-59 –Satisfactory (S)
    d. Below 50 –Below Expectation (B)

Each student’s details should be saved in a file with the student name. The program should enable the use
to view a student details if they provided their names.
*/

//Structure to hold details of student
typedef struct student
{
    char name[100];
    char indexNumber[100];
    int age;
    int marks[5]; //array to store marks in English, Kiswahili, Mathematics, Integrated Science and Creative arts order
    char grade[5]; // array to store student grade plus grade description
}student;

//An array to hold subject names to help in formating the file during write operation
char subNames[5][100] = {"English", "Kiswahili", "Mathematics", "Integrated Science", "Creative arts"};


int main(){
    FILE *fp;   // File pointer

    
    //---------Program Breakdown (Pseudo Code)---------
    //use struct to capture student details
        //inside struct, create an array for student marks
        //use if statements to grade the student and store grades in an array
    //Save dedtails in file with student name as file name
    //View student details when presented with the student name that matches filename otherwise output error

    //------------Program Start------------
    printf("Welcome to grading system 101!\n");
    printf("Follow the instructions below to begin.\n");

    //------------Program Menu------------
        //Enables user to either add new student or view details of a student who already has a file
    printf("\n------------Program Menu------------\n");
    printf("1. Add New Student\n");
    printf("2. View Student\n");

    int MenuChoice;  // Store user menu choice
    printf("Enter your choice: ");
    scanf("%d", &MenuChoice);

    if (MenuChoice == 2){
        //If true, show user the student details
        char filename[100]; // To store the filename (basically just student name)
        char str[1000]; //Array to read file contents

        char temp3; //Avoid error when working with c strings
        scanf("%c", &temp3);

        printf("Enter the student name to view details: ");
        scanf("%[^\n]", &filename);

        fp = fopen(filename,"r"); //Open the file in read mode

        if(fp==NULL){ //Check if file exists or not
            printf("\nFile not found\n");
            return 1; //Error
        }
        else{
            printf("\nFile Found\n");
            printf("Opening File\n\n");
        }

        printf("-------------File Start-------------\n");
        while (fgets(str,1000,fp)){ //Loop through file contents
            printf("%s",str);
        }

        fclose(fp); //Good practice to close file after done with it
        printf("-------------File End-------------\n");
        return 0; //Exit the program since we have already displayed the file contents for user to see
    }    


    student student1; //Structure to store student details and add to file

    //Ask user to enter student details
    char temp2;
    scanf("%c", &temp2);
    printf("Enter the student name: ");
    scanf("%[^\n]", &student1.name);
    
    char temp;
    scanf("%c", &temp);

    printf("Enter the student index number: ");
    scanf("%[^\n]", &student1.indexNumber);

    char temp1;
    scanf("%c", &temp1);

    printf("Enter the student age: ");
    scanf("%d", &student1.age);

    printf("Enter the marks in English, Kiswahili, Mathematics, Integrated Science and Creative arts (eg: 50 40 30 20 90): ");
    //Use a loop to store marks
    for (int i = 0; i < 5; i++){
        scanf("%d", &student1.marks[i]);
    }
    
    //User a loop to grade the student
    for (int i = 0; i < 5; i++){
        if (student1.marks[i] >= 80){
            student1.grade[i] = 'E';
        }
        else if (student1.marks[i] >= 60 && student1.marks[i] <= 79){
            student1.grade[i] = 'M';
        }
        else if (student1.marks[i] >= 50 && student1.marks[i] <= 59){
            student1.grade[i] = 'S';
        }
        else if (student1.marks[i] >= 0 && student1.marks[i] < 50){
            student1.grade[i] = 'B';
        }
        
    }
    
    //Each student’s details should be saved in a file with the student name. 
    //The program should enable the use to view a student details if they provided their names.
    
    
    //Store Student Details in a file
    fp = fopen(student1.name,"w");

    if(fp==NULL){
        printf("File not found\n");
    }
    else{
        printf("File created and saved successfully\n");
    }
    
    //Write to file operations
    fprintf(fp,"Name: %s\n",student1.name);
    fprintf(fp,"Index Number: %s\n",student1.indexNumber);
    fprintf(fp,"Age: %d\n",student1.age);
    
    fprintf(fp,"-------Subject Scores:-------\n");
    for (int i = 0; i < 5; i++){
        fprintf(fp,"%s: %d\n",subNames[i],student1.marks[i]);
    }//Loop to write subject name and marks in file

    fprintf(fp,"-------Subject Grades:-------\n");
    for (int i = 0; i < 5; i++){
        fprintf(fp,"%s: %c\n",subNames[i],student1.grade[i]);
    }//Loop to write subject name and grade in file

    //Add Grading System to each file to enable user understand what the characters mean
    fprintf(fp,"-------Grading system used:-------\n");
    fprintf(fp,"80 and Above : Exceeds Expectations (E)\n");
    fprintf(fp,"60- 79 : Meets Expectations (M)\n");
    fprintf(fp,"50-59 : Satisfactory (S)\n");
    fprintf(fp,"Below 50 : Below Expectation (B)\n");

    return 0;
}//End of program if user selected to add new student files