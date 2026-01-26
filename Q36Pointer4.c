/*Given a sorted array of integers (e.g., {10, 20, 30, 40, 50, 60}), 
write a function that takes a pointer to the start and the array length. 
Use pointer arithmetic to print the first half of the array in ascending order 
and the second half in descending order without creating a new array.*/

#include<stdio.h>
void printCustomorder(int *ptr, int length){
    int mid= length/2;
    // 1.print first half in ascending order
    //we use pointer arithmetic:( ptr +i ) moves the pointer forward

    printf("First half(Ascending):");
    for(int i=0;i<mid;i++){
        printf(" %d ",*(ptr + i));
    }
    printf("\n");

    //2.Print sceond half in descending order
    //create a pointer to the LAST element of the array
    // Ptr + length -1 calculate the address of the last item
    int *endptr= ptr + length - 1;

    printf("second Half( Descending):");
    for(int i=0;i<length-mid;i++){
        printf(" %d ",*endptr);
        endptr--;
    }
    printf("\n");
}
int main(){
    int arr[]={10,20,30,40,50,60};
    //calculate the number of elements in the array
    int length=sizeof(arr)/sizeof(arr[0]);

    printCustomorder(arr,length);
}