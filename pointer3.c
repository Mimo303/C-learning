#include<stdio.h>
int main(){
    int var=10;
    int *p;
    p=&var;
    printf("\n Address of var is:%p",&var);
    printf("\n Adress of var is:%p",p);
    printf("\n Address of pointer P is:%p",&p);
    printf("\n");
    printf("Value of pointer P is:%p",p);
    printf("\nValue of var is:%d",var);
    printf("\n Value of var is:%d",*p);
    printf("\n Value of var is:%d",*&var);
}