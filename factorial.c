#include<stdio.h>
int main(){
    int i,fact=1,n;
    printf("Enter the number to find the factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=i*fact;
    }
    printf("%d is the factorial of %d",fact,n);

}