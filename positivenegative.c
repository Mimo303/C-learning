#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    if(scanf("%d",&num) != 1){
        printf("Invalid input");
        return 1;
    }
    if(num>0){
        printf(" %d is a positive number",num);
    }
    else if(num<0){
        printf(" %d is a negative number",num);
    }
    else{
        printf(" %d is zero",num);
    }
}