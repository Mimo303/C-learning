#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter side a:");
    scanf("%d",&a);
    printf("Enter side b:");
    scanf("%d",&b);
    printf("Enter side c:");
    scanf("%d",&c);
    if(a==b &&  b==c){
        printf("E");

    }
    else if (a==b||a==c||b==c){
        printf("Iso");
    }
    else if(a!=b && a!=c){
        printf("sc");
    }
    else{
        printf("Invalid");
    }
}