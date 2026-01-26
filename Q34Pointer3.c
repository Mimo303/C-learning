/*Given an integer array of size 5, use a pointer to print all elements. Constraint: You must not use the array index operator [] inside the loop.*/
#include<stdio.h>
int main(){
    int i;
    int arr[5]={10,20,30,40,50};
// Create a pointer and set it to point to the first element of the array
// (Note: 'arr' acts as a pointer to the first element)
    int *ptr=arr;

    printf("Array elements:");

    for(i=0;i<5;i++){
        printf("%d\t",*(ptr+i)); //print the value at the memory location(ptr +i)
                               //(ptr+i) moves the pointer forward by i integers
                            
    }
    printf("\n");
}