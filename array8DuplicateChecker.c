/* 5. Create a program that takes an array of integers and removes duplicate elements,
 storing the unique elements in a new array. For example, if the input is {1, 2, 2, 3, 4, 4, 4,
 5}, the output should be {1, 2, 3, 4, 5}*/

#include<stdio.h>
int main(){
    int n, i, j, isUnique, uniqueCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], unique[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++){
        isUnique = 1;
        for(j = 0; j < uniqueCount; j++){
            if(arr1[i] == unique[j]){
                isUnique = 0;
                break;
            }
        }
        if(isUnique){
            unique[uniqueCount] = arr1[i];
            uniqueCount++;
        }
    }

    printf("Unique elements: ");
    for(i = 0; i < uniqueCount; i++){
        printf("%d ", unique[i]);
    }
    return 0;
}