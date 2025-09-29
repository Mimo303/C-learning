/* 3. Create a program that continuously asks the user to enter numbers until they enter 0.
 After they enter 0, the program should print the sum of all the numbers entered. Use a
 do-while loop.*/

 #include<stdio.h>
 int main(){
    int i,num,sum=0;
    printf("Enter the numbers:\n");
    do{
        
        scanf("%d",&num);
        sum+=num;
    }while(num!=0);
    printf("------------------------------------------------------------\n");
    printf("Sum of all the numbers that you entered till now is  %d\n",sum);
    printf("---------------------------------------------------------------");

 }