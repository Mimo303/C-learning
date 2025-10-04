/* 1. Print a Sequence (For Loop): Write a program that takes two integers, start and end,
 and uses a for loop to print all the numbers between them (inclusive).
 ○ Example: Input start=3, end=7. Output: 3 4 5 6 7*/

#include<stdio.h>
int main(){
    int i, ini,fin;
    printf("Enter the initial value to start from:");
    scanf("%d",&ini);
    printf("Enter where to End:");
    scanf("%d",&fin);
    printf("------------------------\n");
    for(i=ini;i<=fin;i++){
        printf("     %d      \n",i);
    }
}