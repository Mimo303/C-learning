#include<stdio.h>
 int fact(int n){
    int i, fact=1;
    for(i=1;i<=n;i++){
        fact*=i;

    }
    printf("factorial of %d is %d",n,fact);

 }
 int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    fact(num);
 }