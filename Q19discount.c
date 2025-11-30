// Write a program to calculate the total cost of 2 Laptops and 1 Printer, assuming cost price and dis count offer. 
#include<stdio.h>
int main(){
    float lapPrice,printerPrice,discount,T_price,sum,dic;
    printf("----DISCOUNT CALCULATOR----\n");
    printf("Enter the cost of laptop: ");
    scanf("%f",&lapPrice);
    printf("Enter the cost of printer: ");
    scanf("%f",&printerPrice);
    sum=lapPrice+printerPrice;
    printf("Enter the discount in percent: ");
    scanf("%f",&discount);
    dic=(sum)*(discount/100);
    T_price=sum-dic;
    printf("\n---------------------------------------------\n");
    printf("Your Total Amount to pay will be %.2f",T_price);
    printf("\n---------------------------------------------\n");


}