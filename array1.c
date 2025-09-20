 // TAKING ARRAY INPUT AND DISPLAYING IT 
#include<stdio.h>
int main(){
    int i;
    int array[5]; 
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++){
        printf(" %d ",array[i]);
    }
}