/* 1. Leap Year Check (If/Else-If): Write a program that takes a year (an integer) as input
 and determines if it is a leap year. */

 #include<stdio.h>
 int  leapyear();
 int main(){
    
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    leapyear(year);
    
 }

 int leapyear( int yr){
    if(yr%4==0){
        printf(" %d is a leap year.",yr);
    }
    else{
        printf(" Not a leap year.");
    }
 }