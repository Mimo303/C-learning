/*3. Day of the Week (Switch/Case): Write a program that takes an integer from 1 to 7 as
 input, representing the day of the week (1=Monday, 7=Sunday). Use a switch or
 equivalent case statement to print the name of the day.*/

#include<stdio.h>
int main(){
    int daynumber;
    printf("__________________________________________________________\n");
    printf("Enter 1 for Monday\nEnter 2 for tuesday\nand so on...\n");
     printf("__________________________________________________________\n");
    printf("Enter the daynumber to get the day:");
    scanf("%d",&daynumber);
    switch(daynumber){
        case 1:
        printf("Today is Monday");
        break;
        case 2:
        printf("Today is Tuesday!");
        break;
        case 3:
        printf("Today is Wednesday!");
        break;
        case 4:
        printf("Today is Thursday!");
        break;
        case 5:
        printf("Today is Friday!");
        break;
        case 6:
        printf("Today is Saturday!");
        break;
        case 7:
        printf("Today is Sunday!");
        break;
        default:
        printf("Invalid!");
    }
}