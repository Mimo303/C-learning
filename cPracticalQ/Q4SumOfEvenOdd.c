//Write a C program to find the sum of first 10 even numbers.
#include<stdio.h>
int sumEven(){
    int i ,sum=0;
    for(i=1;i<=20;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("\nSum of First 10 even is %d",sum);

}
int sumOdd(){
    int i ,sum=0;
    for(i=1;i<=20;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("\nSum of First 10 Odd is %d",sum);


}
int main(){
    sumEven();
    sumOdd();
}