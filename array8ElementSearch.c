/*3. Element Search: Write a program that takes an array of integers and a target integer as
 input. Use a loop to search for the target in the array. If found, print the index where it
 first appears; otherwise, print "-1".*/

#include<stdio.h>
int main(){
    int ar[10], i, target, found = 0;
    printf("Enter the target value: ");
    scanf("%d", &target);
    printf("Enter 10 array elements:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &ar[i]);
    }
    for(i = 0; i < 10; i++){
        if(ar[i] == target){
            printf("Target found at index: %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("-1\n");
    }
    return 0;
}

