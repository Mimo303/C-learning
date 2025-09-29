/* 5. Write a program that takes an integer as input and counts the number of digits in it.
 For example, if the input is 12345, the output should be 5.*/

 #include<stdio.h>
 int main(){
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0){
        count = 1;
    } else {
        if(num < 0) {
            num = -num;
        }
        while(num != 0){
            num = num / 10;
            count++;
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
 }