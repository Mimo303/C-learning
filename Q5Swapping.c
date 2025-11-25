#include<stdio.h>
int main(){
    int n1,n2,temp;
    printf("Enter the number1 and number2:\n");
    scanf("%d\n %d",&n1,&n2);
    printf("before swapping\n");
    printf("number1=%d \n",n1);
    printf("number2=%d \n\n",n2);

    temp=n1;
    n1=n2;
    n2=temp;

    printf("After swapping:\n");
    printf("number1=%d \n",n1);
    printf("number2=%d ",n2);


}