#include<stdio.h>
int main(){
    int ar[5],i,sum=0,avg;
    printf("Enter the five integers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<5;i++){
        sum+=ar[i];
    }
    avg=sum/5;
    printf("%d is the sum of the entered integers.\n",sum);
    printf("%d is the average of the entered integers.",avg);
}