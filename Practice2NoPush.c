//largest&smallest array
#include<stdio.h>
int main(){
    int n;
    printf("Enter how many elements:");
    scanf("%d",&n);
    int ar[n],i,large=0,small;
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        if(large<ar[i]){
            large=ar[i];
        }
    }
    for(i=0;i<n;i++){
        if(small>ar[i]){
            small=ar[i];
        }
    }

    printf(" %d is the greatest in the array.\n",large);
    printf(" %d is the smallest in the array.",small);
      
}