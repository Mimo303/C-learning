/*2.(Factorial)    Ask the user for a number and calculate its factorial using a while loop. (The factorial of
 a non-negative integer n, denoted by n!, is the product of all positive integers less than
 or equal to n)*/

#include<stdio.h>
int main(){
    int i,num,fact=1;
    printf("Enter the number:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        fact*=i;
        

    }
    printf("%d!= %d",num,fact);

}