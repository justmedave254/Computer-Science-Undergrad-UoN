/*
Create a program that captures the marks for the seven courses you are doing and stores them in an array.

Grade and display the marks and their corresponding grades.

Hint: Use loops and arrays
*/
#include<stdio.h>

void main(){
    int marks[7];

    for (int i = 0 ; i < 7; i++){
        printf("Enter marks for course %d: ",i+1);
        scanf("%d",&marks[i]);
    }

    for( int j = 0 ; j < 7; j++){
        if (marks[j] >= 0 && marks[j] <= 40){
            printf("Grade for course %d: %c\n",j+1,'E');
        }
        else if (marks[j] > 40 && marks[j] <= 60)
        {
            printf("Grade for course %d: %c\n",j+1,'D');
        }
        else if (marks[j] > 60 && marks[j] <= 75)
        {
            printf("Grade for course %d: %c\n",j+1,'C');
        }
        else if (marks[j] > 75 && marks[j] <= 85)
        {
            printf("Grade for course %d: %c\n",j+1,'B');
        }
        else if (marks[j] > 85 && marks[j] <= 100)
        {
            printf("Grade for course %d: %c\n",j+1,'A');
        }   
    }
}