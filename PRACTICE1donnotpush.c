//Array Sum and Average:

#include<stdio.h>
int main(){
    int n;
    printf("Enter how many elements:");
    scanf("%d",&n);
    int ar[n],i,sum=0,avg;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Here is your required array:");
    for(i=0;i<n;i++){
        printf(" %d ",ar[i]);
    }
    for(i=0;i<n;i++){
        sum+=ar[i];
    }
    printf("\n");
    printf("The sum of all the array elements= %d\n",sum);
    printf("The average of the array is %d",sum/n);
    
}
