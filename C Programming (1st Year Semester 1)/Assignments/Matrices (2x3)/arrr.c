/*
Create a program that will require a user to enter two 3 by 3 matrices.
Calculate the sum of the the two matrices and display the resulting matrix.
*/
#include<stdio.h>
#include<stdlib.h>

void main(){
    int mat1[2][3];
    int mat2[2][3];
    int mat3[2][3];

    printf("-------First Matrix-------\n");
    printf("Row 1 Column 1:");
    scanf("%d", &mat1[0][0]);
    printf("Row 1 Column 2:");
    scanf("%d", &mat1[0][1]);
    printf("Row 1 Column 3:");
    scanf("%d", &mat1[0][2]);

    printf("Row 2 Column 1:");
    scanf("%d", &mat1[1][0]);
    printf("Row 2 Column 2:");
    scanf("%d", &mat1[1][1]);
    printf("Row 2 Column 3:");
    scanf("%d", &mat1[1][2]);

    printf("\n-------Second Matrix-------\n");
    printf("Row 1 Column 1:");
    scanf("%d", &mat2[0][0]);
    printf("Row 1 Column 2:");
    scanf("%d", &mat2[0][1]);
    printf("Row 1 Column 3:");
    scanf("%d", &mat2[0][2]);

    printf("Row 2 Column 1:");
    scanf("%d", &mat2[1][0]);
    printf("Row 2 Column 2:");
    scanf("%d", &mat2[1][1]);
    printf("Row 2 Column 3:");
    scanf("%d", &mat2[1][2]);

    mat3[0][0] = mat1[0][0] + mat2[0][0];
    mat3[0][1] = mat1[0][1] + mat2[0][1];
    mat3[0][2] = mat1[0][2] + mat2[0][2];
    mat3[1][0] = mat1[1][0] + mat2[1][0];
    mat3[1][1] = mat1[1][1] + mat2[1][1];
    mat3[1][2] = mat1[1][2] + mat2[1][2];
    
    printf("\n---------Resulting matrix---------\n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            
            printf("Row %d: %d\t",i+1,mat3[i][j]);
            printf("Column %d: %d\n",j+1,mat3[i][j]);
        }
        printf("\n");
    }
}