//finding the greatest in the array 
#include<stdio.h>
int main(){
    int i,largest;
    int array[10];
    for(i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    largest=array[0];
    for(i=0;i<10;i++){
        if(largest<array[i]){
            largest=array[i];
        }
    }
    printf("The largest value in the array is: %d ",largest);
}