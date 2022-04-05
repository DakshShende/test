#include "plb.h"

#include<stdio.h>
#include<stdlib.h>

 /*
 * dash is for Design 
 */

void dash(){
        for(i=0;i<=b;i++){
            printf("-");

        }    
}


 /*
 * input takes input from user for Various Expenditure and Income
 */

 
void input(){
        printf("\n Enter Your Details");

        printf("\n\n Enter Your Name :-  ");
        gets(name);

        printf("\n Enter Your Monthly Salary:-  ");
        scanf("%f",&salary);

        printf("\n Enter Your Other Income Source :-  ");
        scanf("%f",&income);

        printf("\n Enter Your Expenditure on Fees:-  ");
        scanf("%f",&fees);
        
        printf("\n Enter Your Expenditure on Grocery :-  ");
        scanf("%f",&grocery);

        printf("\n Enter Your Expenditure on Daily Commute:-  ");
        scanf("%f",&commute);

        printf("\n Enter Your Expenditure on Electricity Bill:-  ");
        scanf("%f",&elec);

        printf("\n Enter Your Expenditure on Recharges :-  ");
        scanf("%f",&recharge);

        printf("\n Enter Your Expenditure on Travelling:-  ");
        scanf("%f",&travel);

        printf("\n Enter Your Expenditure on Other Expenses :-  ");
        scanf("%f",&expenses);
        
      

 }




/*
 * analysis is for Budget Calculation
 */

 void analysis(){
     
        totcredit=grocery+recharge+commute+travel+expenses+fees+elec;
        totdebit=salary+income;
        tot_amt=totdebit-totcredit;
 }




/*
 * output will show the Total expenditure and savings
 */


void output(){
    dash();
    printf("\n\t\t\t");
    printf(name);
    printf(" Ledger Book \n");

    dash();

    printf("\n");   

    printf("\t\t\tEXPENDITURE\t\t\tINCOME\n");

    printf("\n Fees   \t\tRs% .2f",fees);
    printf("\n Grocery  \t\tRs% .2f",grocery);
    printf("\n Commute   \t\tRs% .2f" ,commute);
    printf("\n Electricity bill \tRs% .2f",elec);
    printf("\n Recharges  \t\tRs% .2f",recharge);
    printf("\n Travelling   \t\tRs% .2f" ,travel);    
    printf("\n Others   \t\tRs% .2f",expenses);
    


    printf("\n Other Income Source \t\t\t\t\tRs% .2f",income);

    printf("\n Monthly Salary \t\t\t\t\tRs% .2f",salary);


    printf("\n\n");

        dash();

        printf("\n");

        printf(" TOTAL \t\t\tRs%.2f\t\t\tRs%.2f",totcredit,totdebit);
        printf("\n");

        printf("\n TOTAL SAVINGS \t\tRs%.2f",tot_amt);


        printf("\n");
        printf("\n");

        dash();

}




                          
