/* 1. Write a program that prints all even numbers from 1 to 50 using a for loop.*/

#include<stdio.h>
int main(){
    int i,num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("-----------------------------------------\n");
    printf("These are all Even numbers upto %d\n",num);
    for(i=1;i<=num;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    printf("-------------------------------------------\n");
    printf("These are all the odd numbers upto %d\n",num);
    for(i=1;i<=num;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    printf("----------------------------------------------");
}
