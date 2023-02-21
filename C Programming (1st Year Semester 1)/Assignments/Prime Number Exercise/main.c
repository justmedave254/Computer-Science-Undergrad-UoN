//Write a program that checks the number entered by a user to see if it is a prime number or not.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int susNum;
    int i,val1, val2, count=0;

    printf("Enter a +ve number and see if it is prime or not: ");
    scanf("%d", &susNum);

    val1 = ceil(sqrt(susNum));
    val2 = susNum;

    for (i = 2; i <= val1; i++){
        if (val2 % i == 0){
            count = 1;
        }
    }
    if ((count ==0 && val2 != 1) || val2 == 2 || val2 == 3){
        printf("%d is Prime\n",val2);
    }
    else{
        printf("%d is NOT Prime\n",val2);
    }
}
