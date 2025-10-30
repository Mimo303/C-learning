#include<stdio.h>
int main(){
    int yr;
    printf("Enter the year:");
    scanf("%d",&yr);
    if(yr%4==0){
        if(yr%400==0){
            if(yr%100==0){
                printf("Not a leap year");
            }
        }
        printf("Leap Year");
    }
    printf("Leap Year");
}