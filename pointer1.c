#include<stdio.h>
int main(){
    int a,*p;
    a=30;
    p=&a; //& referencing operator 

    printf("%d\n",*p);  // *-> dereferencing operator; to get value
    printf("%d\n",&p); // &-> to get the address
    printf("%d\n",p); // &-> will give address

    printf("%d\n",*&a); // value of a
    printf("%d\n",&a); //  address of a

    printf("%u\n",p); // address of a
    printf("%u\n",&a); //address of a

    printf("%u\n",&p); // address of p

}