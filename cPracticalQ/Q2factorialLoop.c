//factorial
#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Num:");
    scanf("%d",&n);
    if(n==0){
        printf("Factorial of %d is 1",n);
    }
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of %d is %d",n,fact);
    
}