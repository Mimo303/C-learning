//To write a C Program to perform decision-making constructs- Pay Calculation. 
#include<stdio.h>
int main(){
    int code, sal;
    float da=0.0,allowance;
    char name[50];
    printf("Enter the employee name:");
    scanf("%s",&name);
    printf("Enter Your E-code (1-4)) :");
    scanf("%d",&code);
    printf("Your basic salary:");
    scanf("%d",&sal);
    switch(code){
        case 1:
        da=0.10*sal;
        break;
        case 2:
        da=0.20*sal;
        break;
        case 3:
        da=0.30*sal;
        break;
        default:
        printf("Not given");
    }
    printf("\n\n");
    printf("Employee Name:%s\n",name);
    printf("Employee code:%d\n",code);
    printf("Employee Basic Salary:%d\n",sal);
    printf("\n Your Total allownace is %f",sal+da);

}