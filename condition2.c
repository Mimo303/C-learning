/* 3. Write a program that takes three integers as input and determines which one is the largest.*/

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter\n");
    printf("num1:");
    scanf("%d",&num1);
    printf("num2:");
    scanf("%d",&num2);
    printf("num3:");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf(" %d is the largest out of [ %d %d %d ]",num1, num1 , num2 , num3);
    }
    else if(num2>num3){
        printf(" %d is the largest out of [ %d %d %d ]",num2, num1 , num2 , num3);
    }
    else{
        printf(" %d is the largest out of [ %d %d %d ]",num3, num1 , num2 , num3);
    }
}