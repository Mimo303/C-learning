/* 2. Ticket Price Classifier (Else-If Ladder): Write a program that takes a person's age as 
input and uses an if-else if-else structure to print their corresponding ticket price
 category:
 ○ Age 0−5: "Free"
 ○ Age 6−17: "Child Price"
 ○ Age 18−64: "Adult Price"
 ○ Age 65+ : "Senior Price"*/

 #include<stdio.h>
 int main(){
    int age;
    printf("--------------------------------------\n");
    printf("Welcome to Ticket Price Classifier\n");
    printf("--------------------------------------\n");
    printf("Enter your age:");
    scanf("%d",&age);
    printf("\n");
    if(age<=5){
        printf("Free!Free!Free! Enjoy baby.");
    }
    else if(age<=17){
        printf("CHILD PRICE.");
    }
    else if(age<=64){
        printf("ADULT PRICE.");
    }
    else if(age>=65){
        printf("SENIOR PRICE.");
    }
    else{
        printf("Invalid");
    }
    printf("\n");
    printf("----------------------------");
 }
