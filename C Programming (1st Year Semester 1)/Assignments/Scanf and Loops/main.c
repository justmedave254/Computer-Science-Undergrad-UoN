//Write a program to capture the marks for the seven units you are doing using scanf and the loops. 

#include <stdio.h>

void main(){
    int marks[7];

    for (int i = 1; i < 8; i++ ){
        printf("Enter marks for unit %d: ",i);
        scanf("%d",&marks[i-1]);
    }

    printf("\n/////////////////////////////////////////////");
    printf("\nOutput:\n");
    for (int j = 0; j < (sizeof marks / sizeof marks[0]); j++){
        printf("Marks for unit %d: %d\n",j+1,marks[j]);
    }
    printf("/////////////////////////////////////////////\n");
}