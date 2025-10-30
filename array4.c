/*  
 1. Write a C program that asks the user to enter +ve integers, stores them in an array, and
 then prints the sum and average of those numbers.
*/


#include<stdio.h>
int main(){
    int ar[5],i,sum=0,avg;
    printf("Enter the five integers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<5;i++){
        sum+=ar[i];
    }
    avg=sum/5;
    printf("%d is the sum of the entered integers.\n",sum);
    printf("%d is the average of the entered integers.",avg);
}