/*
 2. Create a program that initializes an array with 10 integers and �nds the maximum and
 minimum values in the array.
*/


#include<stdio.h>
int main(){
    int arr[10],i,maxx=0,minn;
    printf("Enter the 10 integers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(maxx<arr[i]){
            maxx=arr[i];
        }
    }
    printf(" %d  is the largest in the given integers.\n",maxx);

    for(i=0;i<10;i++){
        if(minn>arr[i]){
            minn=arr[i];
        }
    }
    printf(" %d is the smallest in the given integers",minn);
}