/* 2. Create a program that asks the user to enter their age. If the age is 18 or older, print
 "You are eligible to vote." Otherwise, print "You are not eligible to vote yet."*/

 #include<stdio.h>
 int main(){
    int age;
    printf("----------------------------------------------------\n\n");
    printf("Enter Your age:");
    scanf("%d",&age);
    
    printf("______________________________________________________\n\n");
    if(age>=18){
        printf("You are eligible to vote ^-^\n");
    }
    else{
        printf("You are a child now,enjoy your freedom >_<\n");
    }
    printf("__________________________________________________________");
 }