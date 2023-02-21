//Write a program to calculate the area of triangle, circle or rectangle depending upon the user option

#include<stdio.h>
#include<stdlib.h>

void main(){
    char shape;
    double triBase, triHeight;
    double recLength, recWidth;
    double radius;
    const double PI = 3.14;
    
    printf("What shape do you want to find area of?\n");
    printf("Enter t for triangle c for circle r for rectangle: ");
    scanf("%c", &shape);

    switch (shape)
    {
    case 't':
        //Area of a triangle = (0.5)*base*height
        printf("Enter value of base: ");
        scanf("%lf", &triBase);

        printf("Enter value of heigth: ");
        scanf("%lf", &triHeight);

        printf("Area of the triangle (Base: %.2f  Height: %.2f) is: %.2f",triBase, triHeight, ((0.5)*triBase*triHeight));
        break;

    case 'c':
        //Area of a circle = pi*r*r
        //pi = 3.14
        printf("Enter value of radius: ");
        scanf("%lf", &radius);

        printf("Area of the circle (Radius: %.2f) is: %.2f",radius, (PI*radius*radius));
        break;

    case 'r':
        //Area of a rectangle = length*width
        printf("Enter value of length: ");
        scanf("%lf", &recLength);

        printf("Enter value of width: ");
        scanf("%lf", &recWidth);

        printf("Area of the rectangle (Length: %.2f  Width: %.2f) is: %.2f",recLength, recWidth, (recLength*recWidth));
        break;
    
    default:
        printf("Enter a valid shape character");
        break;
    }
    
}