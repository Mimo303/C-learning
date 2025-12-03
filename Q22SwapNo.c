#include<stdio.h>
void swap(int a,int b){
    int *p1,*p2,*temp;
   

    p1=&a;
    p2=&b;

    printf("Before swapping:\n");
    printf("a=%d\n",*p1);
    printf("b=%d",*p2);

    temp=p2;
    p2=p1;
    p1=temp;
    printf("\nAfter swapping:\n");
    printf("a=%d\n",*p1);
    printf("b=%d",*p2);
}
void main(){
    int a,b;
    printf("Enter the number1: ");
    scanf("%d",&a);
    printf("Enter the number2: ");
    scanf("%d",&b);

    swap(a,b);
}