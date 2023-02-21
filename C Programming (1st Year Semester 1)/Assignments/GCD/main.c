#include<stdio.h>
#include<stdlib.h>

void main(){
    int num1, num2, gcd, smallNum; 
    int lcm;
    int count = 1;
    
    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    smallNum = (num1 < num2) ? num1:num2;

    while(count<=smallNum){
        if(num1 % count == 0 && num2 % count == 0){
            gcd = count; 
        }
        count++;
    }

    lcm = (num1 * num2)/gcd;

    printf("GCD is: %d\n",gcd);
    printf("LCM is: %d\n",lcm);

}