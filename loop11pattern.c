/* 5. Character Repetition (Nested Loops): Write a program that takes an integer N as input and uses nested loops to print a right-aligned triangle
 pattern of asterisks (*) of height N.
    ○ Example: Input N=4.
    *
    **
    ***
    *****/

#include<stdio.h>
int main(){
    int i,j,h;
    printf("Enter the height of the pattern:");
    scanf("%d",&h);

    for(i=1;i<=h;i++){
        for(j=1;j<=i;j++){
            printf(" * ");
        }
        printf("\n");
    }
    

}