#include<stdio.h>
int main(){
    int nsub,i,totalmarks,markss=0,marks;
    printf("Enter the numer of subjects:");
    scanf("%d",&nsub);
    printf("Enter the total marks of the exam:");
    scanf("%d",&totalmarks);
    for(i=1;i<=nsub;i++){
        printf("Enter the marks of subjects\n");
        scanf("%d",&marks);
        markss+=marks;
    }
    float percentage=(markss*100)/totalmarks;
    printf("Your percentage is %f:", percentage);
    if(percentage>=90){
        printf("Your grade is [A] here is your reward🍫");
    }
    else if(percentage>=80){
        printf("Your grade is [B] here is your reward🍬");
    }
    else if(percentage>=70){
        printf("Your grade is [C] here is your reward🍭");
    }
    else if(percentage>=60){
        printf("Your grade is [D] here is your reward🍬");
    }
    else if(percentage<=60){
        printf("Your grade is [F] better luck next time 🥹✨🍫");
    }

}