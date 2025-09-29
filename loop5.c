/* 4. Write a C program that prints the multiplication table of a number entered by the user.
 For example, if the user enters 5, the output should be 5 x 1 = 5, 5 x 2 = 10, etc., up to 5
 x 10 = 50.*/

 #include<stdio.h>
 int main(){
    int i,tableof,tillwhere,mul=1;
    printf("Which multiplication table:");
    scanf("%d",&tableof);
    printf("Till where you want the table:");
    scanf("%d",&tillwhere);
    printf("**********************************************\n");
    printf("Here is your required multiplication table.\n");
    printf("**********************************************\n");

    for(i=1;i<=tillwhere;i++){
        mul=tableof*i;
        printf("            %d x %d= %d\n",tableof,i,mul);
    }
 }