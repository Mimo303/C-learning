/*2.(Factorial ) Ask the user for a number and calculate its factorial using a while loop. (The factorial of
 a non-negative integer n, denoted by n!, is the product of all positive integers less than
 or equal to n)*/

 #include<stdio.h>
 int main(){
    int n,i=1,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n){
        fact*=i;
        i++;
    }
    printf(" %d! =%d",n,fact);
 }