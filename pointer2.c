#include<stdio.h>
void main(){
    int number=50;
     int *p=&number;
     printf("The value of number:%d\n",*p);
     printf("The address of number:%p\n",&number);
     printf("The address of pointer P:%p\n",p);


}