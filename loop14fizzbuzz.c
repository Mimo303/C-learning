/* 3. FizzBuzz: Write a program to print the numbers from 1 to 100. Use a loop and
 conditional statements to follow these rules:
 ○ For multiples of three, print "Fizz" instead of the number.
 ○ For multiples of five, print "Buzz" instead of the number.
 ○ For numbers which are multiples of both three and five, print "FizzBuzz".*/


#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=100;i++){
        
        if(i%3==0){
            printf("Fizz\n");
        }
        else if(i%5==0){
            printf("buzz\n");
        }
        else if(i%3==0 && i%5==0){
            printf("Fizzbuzz\n");
        }
        else{
            printf("%d\n",i);
        }
    }
}