/*
Create a program that captures,
    the full names of the student,
    the student registration number,
    the marks for the units the student is taking
    and assigns a grade for the marks.

Hint: Use if else statements for assigning grades

The output produced by the program should follow the format below;

STUDENT NAME: XXXXX XXXX

STUDENT IDNO: P15/22333/2021

COURSE CODE        MARKS       GRADE

CSC 115             30           F
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
    char fullName[20];
    char regNo[20];
    int unitMarks;
    char * courseCode[] = {"CSC 111", "CSC 112", "CSC 113", "CSC 115", "CSC 126"};
    int i;

    printf("Enter full names: ");
    scanf("%[^\n]%*c", fullName);

    printf("Enter registration number (Format P15/22333/2021): ");
    scanf("%[^\n]%*c", regNo);

    for(i=0; i < sizeof(courseCode)/sizeof(courseCode[0]); i++){
        printf("\nEnter marks for %s: ", courseCode[i]);
        scanf("%d",&unitMarks);
        
        if (unitMarks >= 0 && unitMarks < 40){
            printf("STUDENT NAME: %s\n", fullName);
            printf("STUDENT IDNO: %s\n\n", regNo);
            printf("COURSE CODE \t MARKS \t GRADE\n");
            printf("%s \t %d \t F\n",courseCode[i], unitMarks);

        }
        else if(unitMarks >= 40 && unitMarks < 50){
            printf("STUDENT NAME: %s\n", fullName);
            printf("STUDENT IDNO: %s\n\n", regNo);
            printf("COURSE CODE \t MARKS \t GRADE\n");
            printf("%s \t %d \t E\n",courseCode[i], unitMarks);
        }
        else if(unitMarks >= 50 && unitMarks < 60){
            printf("STUDENT NAME: %s\n", fullName);
            printf("STUDENT IDNO: %s\n\n", regNo);
            printf("COURSE CODE \t MARKS \t GRADE\n");
            printf("%s \t %d \t D\n",courseCode[i], unitMarks);
        }
        else if(unitMarks >= 60 && unitMarks < 70){
            printf("STUDENT NAME: %s\n", fullName);
            printf("STUDENT IDNO: %s\n\n", regNo);
            printf("COURSE CODE \t MARKS \t GRADE\n");
            printf("%s \t %d \t C\n",courseCode[i], unitMarks);
        }
        else if(unitMarks >= 70 && unitMarks < 80){
            printf("STUDENT NAME: %s\n", fullName);
            printf("STUDENT IDNO: %s\n\n", regNo);
            printf("COURSE CODE \t MARKS \t GRADE\n");
            printf("%s \t %d \t B\n",courseCode[i], unitMarks);
        }
        else if(unitMarks >= 80 && unitMarks <= 100){
            printf("STUDENT NAME: %s\n", fullName);
            printf("STUDENT IDNO: %s\n\n", regNo);
            printf("COURSE CODE \t MARKS \t GRADE\n");
            printf("%s \t %d \t A\n",courseCode[i], unitMarks);
        }
    }
}
