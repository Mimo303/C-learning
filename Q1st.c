/*To write a C program to find average height of persons,*/
#include<stdio.h>
void main(){
    int n,ar[n],i,sum=0,avg;
    printf("how many peoples:");
    scanf("%d",&n);
    printf("Enter the heights:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        printf(" %d ",ar[i]);
    }
    for(i=0;i<n;i++){
        sum+=ar[i];
    }
    printf(" %d is the sum",sum);
    
    
}