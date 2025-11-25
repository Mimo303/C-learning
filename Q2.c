//calculator using switch

#include<stdio.h>
int main(){
    float num1,num2,result=0.0;
    char opp;
    printf("Enter 1st number:");
    scanf("%f",&num1);
    printf("Enter 2nd number:");
    scanf("%f",&num2);
    printf("Enter the opperator(/,*,+,-):");
    scanf(" %c",&opp);
    result=0;

    switch(opp){
        case '+':
        result=num1+num2;
        printf(" %.1f",result);
        break;
        case '-':
        result=num1-num2;
        printf(" %.1f",result);
        break;
        case '*':
        result=num1*num2;
        printf(" %.1f",result);
        break;
        case '/':
        result=num1/num2;
        printf(" %.1f",result);
        break;
       
        printf("Invalid");

    }
    printf("\n");
    printf("1st number:%.1f\n",num1);
    printf("2nd number:%.1f\n",num2);
    printf("Result:%.1f",result);
    

}