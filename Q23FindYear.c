#include<stdio.h>
void age(int yr1,int yr2){
    int age;
    age=yr1-yr2;
    printf("\n You are %d years old,Congrats!! oohhh~~~",age);
}
void main(){
    int current_year,birth_year;
    printf("Enter the current year: ");
    scanf("%d",&current_year);
    printf("Enter the year of your birth: ");
    scanf("%d",&birth_year);
    age(current_year,birth_year);
}