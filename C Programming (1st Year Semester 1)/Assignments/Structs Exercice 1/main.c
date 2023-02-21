/*
Using a structure create a program for capturing details of at least 5 students. The details to be captured are;
1. Names
2. Reg No
3. Age
4 . Marks for seven subjects

Save the details of the five students on a file called student. Display the content of the saved file on the screen.
*/

#include <stdio.h>
#include <stdlib.h>

struct students {
    char name[20];
    char regNo[30];
    int age;
    int marks[7];
    };

void main(){
    int x = 0;
    char name1[20];
    char regNo1[30];

    struct students s1;
    struct students s2;
    struct students s3;
    struct students s4;
    struct students s5;


    printf("\nWelcome...Follow promtps below\n");

    for (x = 0; x < 5; x++){
        printf("Enter using the format provided:\n");

        printf("Name, RegNo, Age, Marks");
        scanf("%s, %s, %d, %d ",&s1.name);
        

    }
}