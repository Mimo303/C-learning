/* 5. Count Occurrences: Write a program that takes an array of integers and a value as input. 
Use a loop to count and print the total number of times the value appears in the
 array.○ Example: Array [1, 2, 3, 2, 5], value=2. Output: 2*/

 #include<stdio.h>
 int main(){
    int arr[10],i,n,count=0,num;

    printf("---------------------------\n");
    printf("Enter the value to check:");
    scanf("%d",&n);
    printf("Enter the 10 elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]==n){
            count+=1;
        }
    }
    printf("----------------------------\n");
    printf("%d appears %d time\n",n,count);
     printf("----------------------------\n");
 }