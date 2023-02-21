/*
Write a program that will take as an input from the user their names, bank account number and bank account balance.
Have the user enter at least 5 customer details.

Store the user details in a file called bank_details.txt

Display the stored details on the screen.
*/

#include<stdio.h>

FILE *fp;

void main(){
    int i = 0;
    char names[20];
    int accNo;
    int accBal;
    char content[1000];

    fp = fopen("bank_details.txt","w");
    for (i = 0; i < 5; i++){
        printf("\nUser: %d\n", i+1);
        fprintf(fp,"\nUser: %d\n", i+1);

        if (i>0) {
            getchar();
        }
        printf("Name: ");
        scanf("%[^\n]",&names);
        fprintf(fp,"Name: %s\n", names);

        printf("Account Number: ");
        scanf("%d",&accNo);
        fprintf(fp,"Account No: %d\n", accNo);

        printf("Account Balance: ");
        scanf("%d",&accBal);
        fprintf(fp,"Account Bal: %d\n", accBal);
    }
    fclose(fp);

    fp = fopen("bank_details.txt","r");

    printf("\n---------File Output Start-------------\n");
    while (fgets(content,1000,fp)){
        printf("%s",content);
    }

    printf("\n---------File Output End-------------\n");
    fclose(fp);


}