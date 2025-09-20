// adding all the array values 
#include<stdio.h>
int main(){
    int i,sum=0;
    int array[5];
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++){
        sum+=array[i];

    }
    printf(" The sum of all the array values is:\n %d ",sum);
}