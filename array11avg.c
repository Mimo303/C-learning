/* Input a list of marks from the user  and compute their total and average*/

#include<stdio.h>
int main(){
    int avg,total=0;
    const int numsub;
    int ar[numsub],i;
    printf("Enter the total number of subjects:");
    scanf("%d",&numsub);
    printf("Enter the marks of your subjects one by one:\n");
    for(i=0;i<numsub;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<numsub;i++){
        total+=ar[i];
    }
    printf("Your Total Marks is %f",total);

}