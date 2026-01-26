#include<stdio.h>
int swap(int *a, int *b){
    int temp;
    
    printf("\nAfter Swap:\n");
    temp=*a;
    *a=*b;
    *b=temp;
    printf("Num1=%d\n",*a);
    printf("Num2:%d\n",*b);

}
int main(){
    int num1,num2;
    printf("num1:");
    scanf("%d",&num1);
    printf("Num2:");
    scanf("%d",&num2);
    printf("Before Swap:\n");
    printf("Num1=%d\n",num1);
    printf("Num2:%d\n",num2);
    swap(&num1,&num2);

}