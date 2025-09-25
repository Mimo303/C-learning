/*
 3. Write a program that takes an array of integers and reverses its elements. For example,
 if the input array is {1, 2, 3, 4, 5}, the output should be {5, 4, 3, 2, 1}.
*/

#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter the elements:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before reversing:\n");

    for(i=0;i<5;i++){
        printf(" %d  ",arr[i]);
    }
    printf("\n");

    printf("Array after reversing:\n");

    for(i=4;i>=0;i--){
        printf(" %d  ",arr[i]);
    }
}