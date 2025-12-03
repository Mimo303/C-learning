// Write a program to input principle, rate and time and display simple interest.
#include<stdio.h>
int main(){
    float principal_amount,rate,SI;
    int time_year;
    printf("Interest--amount--calculate\n");
    printf("Enter the principal amount: ");
    scanf("%f",&principal_amount);
    printf("Enter the rate: ");
    scanf("%f",&rate);
    printf("Enter the time(in years): ");
    scanf("%d",&time_year);
    SI=(principal_amount*rate*time_year)/100;
    printf("\n Your simple interest amount is: %f",SI);
    printf("\n-------------------------------\n");
    printf("Your total amount to pay is: %f, Thank you!\n kindly pay soon.",principal_amount+SI);

}