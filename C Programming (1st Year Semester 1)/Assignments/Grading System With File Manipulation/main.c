/*
Create a program that captures the marks for the seven courses you are doing in first year and create a function that grades the marks.

Save the details of the courses and their grades in a file called graded marks.
*/

#include<stdio.h>
#include<stdlib.h>

int marks[7];
int j = 0;
int i = 0;

FILE *fp;


void grade();

void main(){

    for (j = 0; j < 7; j++){
        printf("Enter marks for subject %d: ",j+1);
        scanf("%d", &marks[j]);
    }
    grade();
    
}

void grade(){
    fp  = fopen ("graded marks.txt", "w");
    for (i = 0; i < 7; i++){
        
        if (marks[i] >= 0 && marks[i] < 40){
            fprintf(fp, "Grade for subject %d: F\n", i+1);
        }
        else if (marks[i] >= 40 && marks[i] < 55){
            fprintf(fp, "Grade for subject %d: E\n", i+1);
        }
        else if (marks[i] >= 55 && marks[i] < 65){
            fprintf(fp, "Grade for subject %d: D\n", i+1);
        }
        else if (marks[i] >= 65 && marks[i] < 75){
            fprintf(fp, "Grade for subject %d: C\n", i+1);
        }
        else if (marks[i] >= 75 && marks[i] < 85){
            fprintf(fp, "Grade for subject %d: B\n", i+1);
        }
        else if (marks[i] >= 85 && marks[i] <= 100){
            fprintf(fp, "Grade for subject %d: A\n", i+1);
        }
    }
    fclose(fp);
}