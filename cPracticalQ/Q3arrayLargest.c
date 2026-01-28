//12. Write a C program to find the largest element in a given array of elements.
#include<stdio.h>
int main(){
    int arr[5],i,lar=0,sm=0;
    printf("Enter 5 numbers:\n");
    for(i=0;i<=5;i++){
        scanf("%d",&arr[i]);
        if(lar<arr[i]){
            lar=arr[i];
        }
        
    }
    printf("Largest is %d",lar);
    for(i=0;i<=5;i++){
        
        if(sm>arr[i]){
            sm=arr[i];
        }
        
    }
    printf("\nsmallest is %d",sm);
}