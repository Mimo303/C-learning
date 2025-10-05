/* 4. Array Reversal: Write a program that takes an array of integers as input and modifies
 the array in place (without creating a new one) to reverse the order of its elements.
 ○ Example: Input [1, 2, 3, 4]. Output: [4, 3, 2, 1].*/

 #include<stdio.h>
 int main(){
    int arr[5], i, temp;
    printf("Enter the 5 elements:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    // Reverse the array in place
    for(i = 0; i < 5 / 2; i++){
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    printf("\nReversed array: ");
    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
 }
