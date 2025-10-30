#include<stdio.h>
int vote();
int main(){
    
        int age;
        printf("Enter your age:");
        scanf("%d",&age);
        vote(age);
    
}
int vote(int ag){
    if(ag<18){
        printf("You are not eligible to vote yet");

    }
    else if(ag>=18){
        printf("Ready to vote.");
    }
    else{
        printf("Invalid age.");
    }

}