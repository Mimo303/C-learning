#include<stdio.h>
int main(){
    int x=10;
    int *ptr=&x;


    *ptr= *ptr * 2;

    printf("New value:%d\n", *ptr);

    printf("Address of x:%d\n",ptr);

}