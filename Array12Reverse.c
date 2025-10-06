/*Reverse array */
#include<stdio.h>
int main(){
    int n,ar[100],i;
    printf("Enter how many elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Straight array:");
    for(i=0;i<n;i++){
        printf("%d",ar[i]);
    }
    printf("\n");
    printf("Reverse array:");
    for(i=n-1;i>=0;--i){
        printf("%d",ar[i]);
    }
}