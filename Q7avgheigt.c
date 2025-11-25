#include<stdio.h>
int main(){
    int n;
    printf("How many people:");
    scanf("%d",&n);
    int arr[n];
    int sum=0;

    int i;
    printf("Enter the heights below\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
                    
    }
    int avg=sum/n;
    printf("The average height is %d",avg);

}